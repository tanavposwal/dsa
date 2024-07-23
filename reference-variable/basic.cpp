#include <iostream>
using namespace std;

void update(int &n) {
    n++;
}

int main(){
    
    int i = 10;

    int &j = i;

    cout << i << " - " << &i << endl;
    cout << j << " - " << &j << endl;
    update(j);
    cout << i << " - " << &i << endl;
    cout << j << " - " << &j << endl;

    return 0;
}
