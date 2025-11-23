#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x == 1)
        {
            if (k == 1 || n == 1)
            {
                cout << "NO" << endl;
                continue;
            }
            if (k == 2)
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
                continue;
            }
            else
            {

                cout << "YES" << endl;
                if (n % 2 == 0)
                {
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                }
                else
                {
                    cout << (n / 2) << endl;
                    for (int i = 0; i < (n / 2) - 1; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }
        else
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
}