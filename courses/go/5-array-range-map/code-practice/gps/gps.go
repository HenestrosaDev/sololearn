package main

import "fmt"

func main() {
    var citiesNumber int
    fmt.Scanln(&citiesNumber)

    cities := make([]string, citiesNumber)
    var city string

    for i := 0; i < citiesNumber; i++ {
        fmt.Scanln(&city)
        cities[i] = city
    }

    route(cities...)
}

func route(cities ...string) {
    route := ""

    for _, value := range cities {
        route += value + "->"
    }

    fmt.Println(route)
}