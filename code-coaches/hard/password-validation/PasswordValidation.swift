func isPasswordStrong(password: String) -> Bool {
    // Check if the password has at least 2 numbers, 2 special characters,
    // and a length of at least 7 characters
    let numDigits = password.filter { $0 >= "0" && $0 <= "9" }.count
    let numSpecialChars = password.filter { "!@#$%&*".contains($0) }.count

    let isStrong = numDigits >= 2 && numSpecialChars >= 2 && password.count >= 7
    return isStrong
}

func main() {
    if let password = readLine() {
        // Check if the password is strong or weak and print the result
        if isPasswordStrong(password: password) {
            print("Strong")
        } else {
            print("Weak")
        }
    }
}

main()
