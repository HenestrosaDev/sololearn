package main

import "fmt"

func main() {
    var feet int
    fmt.Scanln(&feet)

    feetToInches := 12
    inches := feet * feetToInches
    fmt.Println(inches)
}
