import java.util.ArrayList;
import java.util.List;
import javax.script.ScriptEngine;
import javax.script.ScriptEngineManager;
import javax.script.ScriptException;
import java.util.Scanner;

public class Mathematics {

    /*
    // SoloLearn doesn't support the use of ScriptEngine, but this would be the shortest answer:

    static int findMatchingExpression(int answer, List<String> expressions) {
        ScriptEngineManager manager = new ScriptEngineManager();
        ScriptEngine engine = manager.getEngineByName("JavaScript");

        for (int i = 0; i < expressions.size(); i++) {
            try {
                int result = (int) engine.eval(expressions.get(i));
                if (result == answer) {
                    return i;
                }
            } catch (ScriptException e) {
                e.printStackTrace();
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int answer = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        String expressions = scanner.nextLine();
        List<String> expressionList = extractExpressions(expressions);
        int index = findMatchingExpression(answer, expressionList);

        if (index != -1) {
            System.out.println("index " + index);
        } else {
            System.out.println("none");
        }

        scanner.close();
    }
    */

    // LONG ANSWER
    private static List<String> extractExpressions(String expressions) {
        List<String> expressionList = new ArrayList<>();
        StringBuilder currentExpression = new StringBuilder();
        int openParenthesesCount = 0;

        for (char ch : expressions.toCharArray()) {
            if (ch == '(') {
                openParenthesesCount++;
                if (openParenthesesCount > 1) {
                    currentExpression.append(ch);
                }
            } else if (ch == ')') {
                openParenthesesCount--;
                if (openParenthesesCount == 0 && currentExpression.length() > 0) {
                    expressionList.add(currentExpression.toString().trim());
                    currentExpression.setLength(0);
                } else if (openParenthesesCount > 0) {
                    currentExpression.append(ch);
                }
            } else if (openParenthesesCount > 0) {
                currentExpression.append(ch);
            } else if (ch != ' ') {
                currentExpression.append(ch);
            }
        }

        if (currentExpression.length() > 0) {
            expressionList.add(currentExpression.toString().trim());
        }

        return expressionList;
    }

    private static int findMatchingExpressionIndex(int answer, List<String> expressions) {
        for (int i = 0; i < expressions.size(); i++) {
            int result = evaluateExpression(expressions.get(i));
            if (result == answer) {
                return i;
            }
        }
        return -1;
    }

    private static int evaluateExpression(String expression) {
        List<Integer> operands = new ArrayList<>();
        List<Character> operators = new ArrayList<>();

        int start = 0;
        for (int i = 0; i < expression.length(); i++) {
            char ch = expression.charAt(i);
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                operators.add(ch);
                operands.add(Integer.parseInt(expression.substring(start, i).trim()));
                start = i + 1;
            } else if (ch == '(') {
                int count = 1;
                i++;
                while (count > 0) {
                    if (expression.charAt(i) == '(') {
                        count++;
                    } else if (expression.charAt(i) == ')') {
                        count--;
                    }
                    i++;
                }
                i--;
                operands.add(evaluateExpression(expression.substring(start + 1, i)));
                start = i + 1;
            }
        }

        operands.add(Integer.parseInt(expression.substring(start).trim()));

        int result = operands.get(0);
        for (int i = 0; i < operators.size(); i++) {
            char operator = operators.get(i);
            int operand = operands.get(i + 1);

            if (operator == '+') {
                result += operand;
            } else if (operator == '-') {
                result -= operand;
            } else if (operator == '*') {
                result *= operand;
            } else if (operator == '/') {
                result /= operand;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int answer = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        String expressions = scanner.nextLine();
        List<String> expressionList = extractExpressions(expressions);
        int matchIndex = findMatchingExpressionIndex(answer, expressionList);

        if (matchIndex != -1) {
            System.out.println("index " + matchIndex);
        } else {
            System.out.println("none");
        }

        scanner.close();
    }

}
