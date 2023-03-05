package main

import "fmt"

func main() {
    menu := [...]string{"Water", "Burger", "Cake", "Soup", "Soda", "Fries"}
    // Same as
    // menu := [6]string{"Water", "Burger", "Cake", "Soup", "Soda", "Fries"}

    var index int
    fmt.Scanln(&index)

    if index <= len(menu) - 1 {
        fmt.Println(menu[index])
    } else {
        fmt.Println("Invalid choice")
    }
}