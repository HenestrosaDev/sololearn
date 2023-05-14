import Foundation

func rgbToHex(r: Int, g: Int, b: Int) -> String {
    // Convert each RGB value to a two-digit hex string
    let hexCode = String(stringInterpolation: "#%02x%02x%02x", r, g, b)
    return hexCode
}

func main() {
    if let input = readLine(), let rRgb = Int(input),
        let input = readLine(), let gRgb = Int(input),
        let input = readLine(), let bRgb = Int(input)
    {
        print(rgbToHex(r: rRgb, g: gRgb, b: bRgb))
    }
}

main()