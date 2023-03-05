package main

import "fmt"

type Timer struct {
  id string
  seconds int
}

func reset(timer *Timer) {
    timer.seconds = 0
}

func main() {
    var x int
    fmt.Scanln(&x)
    t := Timer{"ABC", x}

    reset(&t)
    fmt.Println(t)
}