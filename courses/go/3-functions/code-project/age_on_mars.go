package main

import "fmt"

func main() {
    var age int
    fmt.Scanln(&age)

    mars := mars_age(age)
    fmt.Println(mars)
}

func mars_age(ageInEarth int) int {
    daysInYear := 687
    ageDaysInEarth := ageInEarth * 365
    return ageDaysInEarth / daysInYear
}