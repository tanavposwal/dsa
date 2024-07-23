#include <iostream>
#include <vector>
using namespace std;

void movezeros(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr.at(i) == 0) {
            arr.erase(arr.begin() + i);
            arr.push_back(0);
        }
    }
}

int main(){
    vector<int> a = {1,0,3,4,0,0,5,0,0};
    movezeros(a);

    for (int i:a)
    {
        cout << i << " ";
    }
    
    return 0;
}