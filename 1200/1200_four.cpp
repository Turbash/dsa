#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l = n * (n - 1) / 2;
        vector<long long> arr(l);
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        int increment = n - 1;
        while (i < l)
        {
            cout << arr[i] << " ";
            i += increment;
            increment--;
        }
        int last = 1e9;
        cout << last << endl;
    }
}