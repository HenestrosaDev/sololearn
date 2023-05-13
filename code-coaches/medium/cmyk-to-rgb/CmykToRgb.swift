import Foundation

func toRGB(cyan: Float, magenta: Float, yellow: Float, key: Float) -> String {
    let red = Int(round(255 * (1 - cyan) * (1 - key)))
    let green = Int(round(255 * (1 - magenta) * (1 - key)))
    let blue = Int(round(255 * (1 - yellow) * (1 - key)))

    return "\(red),\(green),\(blue)"
}

func main() {
    if let cyan = readLine().flatMap(Float.init),
       let magenta = readLine().flatMap(Float.init),
       let yellow = readLine().flatMap(Float.init),
       let key = readLine().flatMap(Float.init) {
        print(toRGB(cyan: cyan, magenta: magenta, yellow: yellow, key: key))
    }
}

main()
