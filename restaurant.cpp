#include <bits/stdc++.h>

using namespace std;

class Restaurant
{
public:
    float price;
    string item;
    int quantity;
};

int main()
{
    int n;
    cin >> n;
    Restaurant obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].price;
        getchar();
        getline(cin, obj[i].item);
        cin >> obj[i].quantity;
    }
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].item << '\t' << obj[i].price << '\t' << obj[i].quantity << endl;
    }
    return 0;
}