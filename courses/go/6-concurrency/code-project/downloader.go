package main

import "fmt"

func download(size int, ch chan int) {
    var sum int
    for i := 0; i <= size; i++ {
        sum += i
        // simulate download progress
        // progress := float64(i) / float64(size) * 100
        // fmt.Printf("Downloading... %.2f%%\n", progress)
    }

    ch <- sum
}

func main() {
    ch1 := make(chan int)
    ch2 := make(chan int)
    ch3 := make(chan int)

    var s1, s2, s3 int
    fmt.Scanln(&s1)
    fmt.Scanln(&s2)
    fmt.Scanln(&s3)

    go download(s1, ch1)
    go download(s2, ch2)
    go download(s3, ch3)

    totalSize := <- ch1 + <- ch2 + <- ch3
    fmt.Println(totalSize)
}