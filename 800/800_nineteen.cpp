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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int countones = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                countones++;
        }
        int flipTo1 = 0;
        int flipToGreater = 0;
        flipToGreater = countones > n - countones ? 0 : ((n - countones) - countones + 1) / 2;
        flipTo1 = (n - countones) % 2;
        if (flipTo1)
        {
            if ((flipToGreater) % 2 == 1)
            {
                cout << flipToGreater << endl;
            }
            else
            {
                cout << flipToGreater + 1 << endl;
            }
        }
        else
        {
            if ((flipToGreater) % 2 == 0)
            {
                cout << flipToGreater << endl;
            }
            else
            {
                cout << flipToGreater + 1 << endl;
            }
        }
    }
}