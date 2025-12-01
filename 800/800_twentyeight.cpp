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
        int isAllSame = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                isAllSame = 0;
                break;
            }
        }
        if (isAllSame)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            sort(a.begin(), a.end());
            if(a[a.size()-1]==a[a.size()-2]){
                cout<<a[0]<<" ";
                for(int i=a.size()-1;i>=1;i--){
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else{
                for (int i = a.size() - 1; i >= 0; i--)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
    }
}