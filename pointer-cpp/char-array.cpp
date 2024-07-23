#include <iostream>
using namespace std;

// IMPORTANT
// pointer in char only contain memory address to first element. WHICH IS RISKY
int main(){
    
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << " - " << ch << endl;
    //0x7fffa75298a0 - abcde

    char *c = &ch[0];
    char *c2 = &ch[1];

    cout << c << " - " << c2 << endl;
    //abcde - bcde

    char temp = 'z';
    char *p = &temp;
    
    cout << p << " - " << temp << endl;
    // start from z and till \0 it return char from next memory address
    //zBdF��

    return 0;
}