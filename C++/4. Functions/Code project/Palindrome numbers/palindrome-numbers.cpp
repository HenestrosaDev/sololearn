#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
	int remainder;
	int reversedNumber = 0;
	int inputNumber = x;

	while (x != 0)
	{
		remainder = x % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		x /= 10;
	}

	return inputNumber == reversedNumber;
}

int main()
{
	int inputNumber;
	cin >> inputNumber;

	if (isPalindrome(inputNumber))
	{
		cout << inputNumber << " is a palindrome";
	}
	else
	{
		cout << inputNumber << " is NOT a palindrome";
	}

	return 0;
}