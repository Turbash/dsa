#include <bits/stdc++.h>
using namespace std;

// Optimizes standard I/O operations for speed
void solve()
{
    // Your code goes here
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back({a[i]-b[i],i});
    }
    sort(v.begin(),v.end(), greater<>());
    vector<int> ans;
    int large = v[0].first;
    for(int i=0;i<n;i++)
    {
        if(v[i].first==large)
        {
            ans.push_back(v[i].second+1);
        }
        else
        {
            break;
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size()-1;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<ans[ans.size()-1]<<endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t; // Comment this out if there is only 1 test case
    while (t--)
    {
        solve();
    }

    return 0;
}
