import Foundation

func findMatchingExpression(_ answer: Int, _ expressions: String) -> Int? {
    let expressionList = expressions.split(separator: " ")
    for (index, expression) in expressionList.enumerated() {
        if let result = evaluateExpression(String(expression)), result == answer {
            return index
        }
    }
    return nil
}

func evaluateExpression(_ expression: String) -> Int? {
    let operators: [Character] = ["+", "-", "*", "/"]
    var currentNumber = 0
    var currentOperator: Character = "+"
    var currentResult = 0

    for char in expression {
        if let number = Int(String(char)) {
            currentNumber = currentNumber * 10 + number
        } else if operators.contains(char) {
            currentResult = applyOperator(currentResult, currentNumber, currentOperator)
            currentNumber = 0
            currentOperator = char
        }
    }

    currentResult = applyOperator(currentResult, currentNumber, currentOperator)
    return currentResult
}

func applyOperator(_ leftOperand: Int, _ rightOperand: Int, _ operatorChar: Character) -> Int {
    switch operatorChar {
    case "+":
        return leftOperand + rightOperand
    case "-":
        return leftOperand - rightOperand
    case "*":
        return leftOperand * rightOperand
    case "/":
        return leftOperand / rightOperand
    default:
        return 0
    }
}

func main() {
    let answer = Int(readLine()!)! 
	let expressions = readLine()!

	if let index = findMatchingExpression(answer, expressions) {
		print("index \(index)")
	} else {
		print("none")
	}
}

main()
