import Foundation

func main() {
    var numBlocks = (0..<4).reduce(0) { (sum, _) in
        sum + Int(readLine()!)!
    }

    let numStudents = 15
    print(numBlocks % numStudents)
}

main()
