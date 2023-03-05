package main

import "fmt"

func main() {
	team := map[string]float32{
		"P1": 1.98,
		"P2": 2.05,
		"P3": 1.89,
		"P4": 2.0,
		"P5": 2.11}

	var heightsSum float32
	playersNumber := float32(len(team))

	for _, value := range team {
		heightsSum += value
	}

	avg := heightsSum / playersNumber
	fmt.Println(avg)
}
