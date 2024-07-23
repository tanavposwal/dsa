#include <iostream>
using namespace std;

void saydigit(int num)
{
    if (num < 1)
    {
        return;
    }
    else
    {
        saydigit(num/10);
        cout << num%10 << " ";
    }
}

int main()
{
    int num;
    cin >> num;
    cout << endl;
    saydigit(num);
    return 0;
}