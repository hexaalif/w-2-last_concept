#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string word = "Ratul";
    stringstream ss(s);
    string sample;
    // int cnt = 0;
    bool found = false;
    while (ss >> sample)
    {
        if (sample == word)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}