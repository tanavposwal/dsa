#include <iostream>
using namespace std;

string removeDuplicate(string s) {
    string temp = "";
    int i = 0;
    bool re = false;
    while (i<s.length()) {
        if (s[i] == s[i+1]) {
            i+=2;
            re = true;
        } else {
            temp.push_back(s[i]);
            i++;
        }
    }

    if (re) {
        temp = removeDuplicate(temp);
    }

    return temp;
}

int main(){
    string s = "abbaca";
    string ds = removeDuplicate(s);
    cout << ds;
    return 0;
}