#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int ans;

    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else {
        if (a>=b) {
            return gcd(a-b, b);
        } else {
            return gcd(a, b-a);
        }
    }

}

int main(){
    
    cout << gcd(12, 36);

    return 0;
}