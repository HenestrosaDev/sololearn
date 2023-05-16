import Foundation

func calculateMoves(mapStr: String) -> Int {
    let mapRows = mapStr.components(separatedBy: ",")
    let numMapRows = mapRows.count

    let letterToFind: Character = "P"
    var p1: (Int, Int)? = nil
    var p2: (Int, Int)? = nil

    for i in 0..<numMapRows {
        for j in 0..<numMapRows {
            if mapRows[i][mapRows[i].index(mapRows[i].startIndex, offsetBy: j)] == letterToFind {
                if p1 == nil {
                    p1 = (i, j)
                } else {
                    p2 = (i, j)
                }
            }
        }
    }

    // Calculate the number of moves using Manhattan distance formula
    let moves = abs(p1!.0 - p2!.0) + abs(p1!.1 - p2!.1)

    return moves
}

func main() {
    if let mapStr = readLine() {
        print(calculateMoves(mapStr: mapStr))
    }
}

main()
