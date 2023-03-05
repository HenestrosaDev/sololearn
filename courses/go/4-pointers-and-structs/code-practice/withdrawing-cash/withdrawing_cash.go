package main

import "fmt"

type BankAccount struct {
    holder string
    balance int
}

func (bankAccount *BankAccount) withdraw(amount int) {
    result := bankAccount.balance - amount
    if result > 0 {
        bankAccount.balance = result
    } else {
        fmt.Println("Insufficient Funds")
    }
}

func main() {
    acc := BankAccount{"James Smith", 100000}

    var amount int
    fmt.Scanln(&amount)

    acc.withdraw(amount)
    fmt.Println(acc)
}