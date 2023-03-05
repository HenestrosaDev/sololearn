package main

import "fmt"

func main() {
    var temperature float32
    fmt.Scanln(&temperature);

    if temperature > 99.5 {
        fmt.Println("Fever")
    } else {
        fmt.Println("Allowed")
    }
}
