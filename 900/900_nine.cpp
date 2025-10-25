#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int k = a[0] - 1;

        for (int j = 0; j < n; j++)
        {
            k=gcd(k,a[j]-j-1);
        }

        cout << k << endl;
    }
    return 0;
}