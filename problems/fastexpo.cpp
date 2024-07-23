#include <iostream>
using namespace std;

//You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.

int modularExponentiation(int x, int n, int m) {
	int res = 1;

	while (n>0){
		if (n&1) {
			res = ( 1LL *(res) * (x)%m)%m;
		}
		x = ( 1LL * (x)%m*(x)%m)%m;
		n = n>>1;
	}

	return res;
}

int main(){
    
    return 0;
}
