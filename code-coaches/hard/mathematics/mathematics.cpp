#include <iostream>
#include <sstream>
#include <vector>
#include <limits>

// Function to evaluate a mathematical expression and return the result
int evaluate_expression(const std::string& expression)
{
    std::istringstream iss(expression);
    char oper;
    int num;
    int result;
    iss >> result;
    while (iss >> oper >> num)
    {
        switch (oper)
        {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                result /= num;
                break;
            default:
                break;
        }
    }

    return result;
}

int main()
{
    int answer;
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string expressions;
    std::getline(std::cin, expressions);

    std::istringstream iss(expressions);
    std::vector<std::string> expression_list;
    std::string expression;
    while (iss >> expression)
    {
        expression_list.push_back(expression);
    }

    bool found_match = false;
    int index = 0;
    for (const auto& expr : expression_list)
    {
        if (expr[0] == '(' && expr[expr.size() - 1] == ')')
        {
            int result = evaluate_expression(expr.substr(1, expr.size() - 2));
            if (result == answer)
            {
                found_match = true;
                break;
            }
        }
        index++;
    }

    if (found_match)
        std::cout << "index " << index << std::endl;
    else
        std::cout << "none" << std::endl;

    return 0;
}