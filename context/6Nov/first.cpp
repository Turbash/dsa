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
        int maxN=INT_MIN;
        int minN=INT_MAX;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            maxN=max(maxN,a[i]);
            minN=min(minN,a[i]);
        }
        int x;
        cin>>x;
        if(x<=maxN && x>=minN){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}