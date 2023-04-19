#include <iostream>

class Account
{
    public:
        Account() {}

        Account(int a): balance(a)
        {
            interest += balance / 10;
        }

        int getTotal()
        {
            return balance + interest;
        }

        Account operator+(Account &account)
        {
            Account res;
            res.balance = this->balance + account.balance;
            res.interest = this->interest + account.interest;

            return res;
        }

    private:
        int balance = 0;
        int interest = 0;
};

int main()
{
    int n1, n2;
    std::cin >> n1 >> n2;

    Account a(n1);
    Account b(n2);
    Account res = a + b;

    std::cout << res.getTotal();
}