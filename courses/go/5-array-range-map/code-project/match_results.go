package main

import "fmt"

func main() {
    results := []string{"w", "l", "w", "d", "w", "l", "l", "l", "d", "d", "w", "l", "w", "d"}
    var lastMatchResult string
    fmt.Scanln(&lastMatchResult)

    results = append(results, lastMatchResult)
    points := 0

    for _, value := range results {
        if value == "w" {
            points += 3
        } else if value == "d" {
            points +=1
        }
    }

    fmt.Println(points)
}