import Foundation

func rgbToHex(r: Int, g: Int, b: Int) -> String {
    // Convert each RGB value to a two-digit hex string
    let hexCode = String(stringInterpolation: "#%02x%02x%02x", r, g, b)
    return hexCode
}

func main() {
    let rRgb = Int(readLine()!)!
    let gRgb = Int(readLine()!)!
    let bRgb = Int(readLine()!)!
	
	print(rgbToHex(r: rRgb, g: gRgb, b: bRgb))
}

main()