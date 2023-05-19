#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Function to evaluate a mathematical expression and return the result
int evaluate_expression(const char* expression)
{
    int result = 0;
    char oper = '+';
    int operand = 0;

    for (int i = 0; i < strlen(expression); i++)
    {
        char ch = expression[i];

        if (ch >= '0' && ch <= '9')
        {
            operand = operand * 10 + (ch - '0');
        }

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '\0' || ch == ')')
        {
            switch (oper)
            {
                case '+':
                    result += operand;
                    break;
                case '-':
                    result -= operand;
                    break;
                case '*':
                    result *= operand;
                    break;
                case '/':
                    result /= operand;
                    break;
                default:
                    break;
            }

            operand = 0;

            if (ch == '\0' || ch == ')')
            {
                break;
            }

            oper = ch;
        }
    }

    return result;
}

int main()
{
    int answer;
    scanf("%d", &answer);
    getchar();

    char expressions[1000];
    fgets(expressions, sizeof(expressions), stdin);

    char* token = strtok(expressions, " ");
    int index = 0;
    int found_match = false;
    while (token != NULL)
    {
        int result = evaluate_expression(token);
        if (result == answer)
        {
            found_match = true;
            break;
        }
        token = strtok(NULL, " ");
        index++;
    }

    if (found_match)
        printf("index %d\n", index);
    else
        printf("none\n");

    return 0;
}
