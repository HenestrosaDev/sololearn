package main

import "fmt"

func main() {
    var freq int
    fmt.Scanln(&freq)

    switch {
    case freq < 0:
        fmt.Println("Wrong Input")
    case freq < 20:
        fmt.Println("Infrasound")
    case freq > 20000:
        fmt.Println("Ultrasound")
    default:
        fmt.Println("Audible")
    }
}
