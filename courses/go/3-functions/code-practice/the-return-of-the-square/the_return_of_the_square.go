package main

import "fmt"

func main() {
    var x int
    fmt.Scanln(&x)

    res := square(x)
    fmt.Println(res)
}

func square(x int) int {
    return x * x
}