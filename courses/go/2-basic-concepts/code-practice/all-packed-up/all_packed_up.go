package main

import "fmt"

func main() {
    items := 1081
    boxItems := 7
    remainingItems := items % boxItems
    fmt.Println(remainingItems)
}
