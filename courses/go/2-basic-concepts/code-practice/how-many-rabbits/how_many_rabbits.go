package main

import "fmt"

func main() {
    var years int
    fmt.Scanln(&years)

    initialRabbits := 7

    for i := 0; i < years; i++ {
        initialRabbits += initialRabbits
    }

    fmt.Println(initialRabbits)
}
