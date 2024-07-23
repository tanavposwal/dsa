#include <iostream>
#include <vector>
using namespace std;

string common(string str1, string str2)
{
    int i = 0;
    string c = "";

    while (i < str1.length() && i < str2.length())
    {
        if (str1[i] == str2[i])
        {
            c.push_back(str1[i]);
            i++;
        }
        else
        {
            break;
        }
    }

    return c;
}

string findPrefix(vector<string> &strs)
{
    string prefix = strs[0];

    for (string str : strs)
    {
        prefix = common(str, prefix);
    }

    return prefix;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    cout << findPrefix(strs);

    return 0;
}