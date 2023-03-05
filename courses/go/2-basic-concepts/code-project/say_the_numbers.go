package main

import "fmt"

func main() {
    for i := 0; i < 3; i++ {
        var a int
        fmt.Scanln(&a)

        switch {
        case a == 0:
            fmt.Println("Zero")
        case a == 1:
            fmt.Println("One")
        case a == 2:
            fmt.Println("Two")
        case a == 3:
            fmt.Println("Three")
        case a == 4:
            fmt.Println("Four")
        case a == 5:
            fmt.Println("Five")
        case a == 6:
            fmt.Println("Six")
        case a == 7:
            fmt.Println("Seven")
        case a == 8:
            fmt.Println("Eight")
        case a == 9:
            fmt.Println("Nine")
        case a == 10:
            fmt.Println("Ten")
        }
    }
}