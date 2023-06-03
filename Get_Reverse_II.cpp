#include <bits/stdc++.h>

using namespace std;

class Rev2
{
public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Rev2 obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].nm;
        cin >> obj[i].cls;
        cin >> obj[i].s;
        cin >> obj[i].id;
    }
    // Rev2 mx;
    // mx.id = INT_MAX;
    // sort(obj, obj+n, swap);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (obj[i].id < obj[j].id)
            {
                swap(obj[i].id, obj[j].id);
            }
            else
            {
                swap(obj[j].id, obj[i].id);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].nm << " " << obj[i].cls << " " << obj[i].s << " " << obj[i].id << endl;
    }
    return 0;
}