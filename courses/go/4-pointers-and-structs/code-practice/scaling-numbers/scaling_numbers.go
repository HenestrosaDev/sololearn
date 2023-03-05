package main
import "fmt"

func main() {
    var num float32
     var factor float32

    fmt.Scanln(&num)
    fmt.Scanln(&factor)

    scale(&num, factor)
    fmt.Println(num)
}

func scale(num *float32, factor float32) {
    *num *= factor
}