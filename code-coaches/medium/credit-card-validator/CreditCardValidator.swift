func doesPassLuhnAlgorithm(ccNum: String) -> Bool {
    // Step 1: Reverse the credit card number
    let reversedCCNum = String(ccNum.reversed())

    var totalSum = 0
    for (index, char) in reversedCCNum.enumerated() {
        guard let digit = Int(String(char)) else {
            return false
        }
        // Step 2: Multiply every second digit by 2
        if index % 2 == 1 {
            var doubledDigit = digit * 2
            // Step 3: Subtract 9 from all numbers higher than 9
            if doubledDigit > 9 {
                doubledDigit -= 9
            }
            totalSum += doubledDigit
        } else {
            totalSum += digit
        }
    }

    // Step 5: Modulo 10 of that sum should be equal to 0
    return totalSum % 10 == 0
}

func validateCreditCardNumber(ccNum: String) -> Bool {
    return ccNum.count == 16 && doesPassLuhnAlgorithm(ccNum: ccNum)
}

func main() {
    if let ccNum = readLine() {
        if validateCreditCardNumber(ccNum: ccNum) {
            print("valid")
        } else {
            print("not valid")
        }
    }
}

main()
