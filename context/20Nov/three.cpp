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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count1a = 0;
        int count1b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                count1a++;
            if (b[i] == 1)
                count1b++;
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (b[i] != a[i])
                {
                    if (count1a % 2 == 0)
                    {
                        a[i] = !a[i];
                        b[i] = !b[i];
                        if (a[i] == 1){
                            count1a--;
                            count1b++;
                        }
                        else
                        {
                            count1a++;
                            count1b--;
                        }
                    }
                }
            }
            else
            {
                if (b[i] != a[i])
                {
                    if (count1b % 2 == 0)
                    {
                        a[i] = !a[i];
                        b[i] = !b[i];
                        if (a[i] == 1){
                            count1a--;
                            count1b++;
                        }
                        else
                        {
                            count1a++;
                            count1b--;
                        }
                    }
                }
            }
        }
        int ansa = 0;
        int ansb = 0;
        for (int i = 0; i < n; i++)
        {
            ansa ^= a[i];

            ansb ^= b[i];
        }
        if (ansa > ansb)
            cout << "Ajisai" << endl;
        else if (ansb > ansa)
            cout << "Mai" << endl;
        else
            cout << "Tie" << endl;
    }
}