#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve()
{
    long long n;
    cin >> n;
    vi a(n);
    int allz = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i])
            allz = 0;
    }
    if (allz)
    {
        cout << 0 << endl;
        cout << endl;
        return;
    }
    vi is(n, 1);
    if(a[0]<n)
        is[a[0]] = 0;
    int id = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] != 1)
        {
            break;
        }
        id--;
        is[i + 1] = 0;
    }
    for (int i = 1; i < id; i++)
    {
        int t = a[i];
        int e = i + 1;
        for (int j = t * e; j < (t + 1) * e && j<n; j++)
        {
            if (is[j])
            {
                is[j] = 0;
            }
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(is[i])
            cnt++;
    }
    cout<<cnt<<endl;
    for (int i = 0; i < n; i++)
    {
        if (is[i])
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}