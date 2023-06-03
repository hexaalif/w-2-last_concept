#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    // string s[t], x;
    // getchar();
    string s, x;
    for (int i = 0; i < t; i++)
    {
        getline(cin, s, ' ');
        getline(cin, x);
        // cin.ignore();
        while (s.find(x) != -1)
        {
            /* code */
            s.replace(s.find(x), x.length(), "$");
        }

        // int found = s.find(x);
        // s.replace(found, found.length(), "$");
        cout << s << endl;
    }
    // for (int i = 0; i < t; i++)
    // {
    //     cout << s[i] << " ";
    //     // getchar();
    // }
    return 0;
}