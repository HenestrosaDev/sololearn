package main

import "fmt"

type Timer struct {
    id string
    value int
}

func (timer *Timer) tick() {
    timer.value += 1
    fmt.Println(timer.value)
}

func main() {
    var ticks_num int
    fmt.Scanln(&ticks_num)

    t := Timer{"timer1", 0}

    for i := 0; i < ticks_num; i++ {
        t.tick()
    }
}