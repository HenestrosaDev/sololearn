func getPiDecimalAt(index: Int) -> Character {
    let piDecimals = "14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270938521105559644622948954930381964428"
    let decimal = piDecimals[piDecimals.index(piDecimals.startIndex, offsetBy: index)]
    return decimal
}

func main() {
    if let index = readLine().flatMap({ Int($0) }) {
        // - 1 to convert the index to 0-based index
        print(getPiDecimalAt(index: index - 1))
    }
}

main()