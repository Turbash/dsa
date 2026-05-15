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
        int decSeq = 0;
        int incSeq = 0;
        int ans = 1;
        int i =1;
        while(i<n){
            if(a[i]>a[i-1]){
                if(incSeq==1){
                    i++;
                }
                else{
                    incSeq=1;
                    ans++;
                }
                decSeq=0;
            }
            else if(a[i]<a[i-1]){
                if(decSeq==1){
                    i++;
                }
                else{
                    decSeq=1;
                    ans++;
                }
                incSeq=0;
            }
            else{
                while(i<n && a[i]==a[i-1]){
                    i++;
                }
            }
        }
        cout << ans << endl;
    }
}