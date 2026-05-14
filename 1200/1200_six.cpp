#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int minELe = 1;
        int maxEle = n;
        int l = 0;
        int r = n - 1;
        while (l < r - 3)
        {
            if (a[l] == minELe || a[r] == minELe)
            {
                if (a[l] == minELe)
                {
                    l++;
                }
                else
                {
                    r--;
                }
                minELe++;
            }
            if (a[l] == maxEle || a[r] == maxEle)
            {
                if (a[l] == maxEle)
                {
                    l++;
                }
                else
                {
                    r--;
                }
                maxEle--;
            }
            if (a[l] != minELe && a[l] != maxEle && a[r] != minELe && a[r] != maxEle)
            {
                break;
            }
        }
        if (a[l] == minELe || a[r] == minELe || a[l] == maxEle || a[r] == maxEle)
        {
            cout << -1 << endl;
        }
        else
            cout << l + 1 << " " << r + 1 << endl;
    }
}