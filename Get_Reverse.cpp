#include <bits/stdc++.h>

using namespace std;

class Reverse
{
public:
    string name;
    int cls;
    string s;
    int mat;
    int eng;
};

int main()
{
    int n;
    cin >> n;
    Reverse obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].s;
        cin >> obj[i].mat;
        cin >> obj[i].eng;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].s << " " << obj[i].mat << " " << obj[i].eng << endl;
    }
    return 0;
}