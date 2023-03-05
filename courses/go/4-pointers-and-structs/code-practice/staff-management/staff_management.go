package main

import "fmt"

func main() {
    e1 := Employee{"James", 42, "Manager", 0}

    var x float32
    fmt.Scanln(&x)
    e1.salary = x

    fmt.Println("========")
    fmt.Println(e1.name + "(" + e1.position + ")")
    fmt.Println(e1.age)
    fmt.Println(e1.salary)
    fmt.Println("========")
}

type Employee struct {
    name string
    age int
    position string
    salary float32
}