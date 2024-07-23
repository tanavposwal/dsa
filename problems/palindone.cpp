#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    int originalNumber = x;
    long int reverse = 0;

    while (x > 0)
    {
        int digit = x % 10;
        reverse = (reverse * 10) + digit;
        x /= 10;
    }

    if (originalNumber == reverse)
    {
        return 1; // It is a palindrome
    }
    else
    {
        return 0; // It is not a palindrome
    }
}

int main()
{
    if (isPalindrome(1234567899)) 
        cout << "done";
    else
        cout << "not";

    return 0;
}
