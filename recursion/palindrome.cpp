#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }
    if (str[i] == str[j])
    {
        return checkPalindrome(str, i+1, j-1);
    }
    else
    {
        return false;
    }
}

int main()
{

    string name = "naman";
    cout << endl;

    if (checkPalindrome(name, 0, name.length()-1))
    {
        cout << "is palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
    return 0;
}