#include <bits/stdc++.h>

using namespace std;

class Marks
{
public:
    string item;
    int cls;
    string section;
    int id;
    int mat;
    int eng;
    int sum = 0;
};

// sorting based on total marks
bool Compare(Marks &a, Marks &b)
{
    if (a.sum == b.sum)
    {
        return a.id < b.id;
    }
    return a.sum > b.sum;
}

int main()
{
    int n;
    cin >> n;
    Marks obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].item;
        cin >> obj[i].cls;
        cin >> obj[i].section;
        cin >> obj[i].id;
        cin >> obj[i].mat;
        cin >> obj[i].eng;
    }

    // int  = 0;
    for (int i = 0; i < n; i++)
    {

        obj[i].sum += obj[i].mat + obj[i].eng;
        // cout << obj[i].sum << endl;
    }

    sort(obj, obj + n, Compare);
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].item << " " << obj[i].cls << " " << obj[i].section << " " << obj[i].id << " " << obj[i].mat << " " << obj[i].eng << endl;
    }
    return 0;
}