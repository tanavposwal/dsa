#include <iostream>
#include <time.h>
using namespace std;

// pseudo random
int random(int s, int e) {
    srand(time(NULL));
    int len = e-s;
    int num = (rand() % (len+1)) + (s);

    return num;
}

int main(){

    while (1) {
        /* code */
        cout << random(10,15) << endl;
    }
    

    return 0;
}
