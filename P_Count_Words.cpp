#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool insideWord = false;
    stringstream ss(s);
    string word;
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (insideWord == false)
            {
                cnt++;
            }
            insideWord = true;
        }
        else
        {
            insideWord = false;
        }
    }
    cout << cnt;
    return 0;
}

// bki re onk