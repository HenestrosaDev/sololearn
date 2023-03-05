package main

import "fmt"

type Cart struct {
	prices []float32
}

func (cart Cart) show() {
	var sum float32 = 0.0

	for _, value := range cart.prices {
		sum += value
	}

	fmt.Println(sum)
}

func main() {
	cart := Cart{}
	var size int
	fmt.Scanln(&size)

	cart.prices = make([]float32, size)
	var input float32

	for i := 0; i < size; i++ {
		fmt.Scanln(&input)
		cart.prices[i] = input
	}

	cart.show()
}
