#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int onesA = 0, onesB = 0;
    int evenA = 0, evenB = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            onesA++;
            if (i % 2 == 0)
                evenA++;
        }
        if (b[i] == '1')
        {
            onesB++;
            if (i % 2 == 0)
                evenB++;
        }
    }

    if (onesA == onesB && evenA == evenB){
        long long ans = 0;
        for(int k=0;k<2;k++){
            vector<int> pa;
            vector<int> pb;
            for(int i=k;i<n;i+=2){
                if(a[i]=='1') pa.push_back(i);
                if(b[i]=='1') pb.push_back(i);
            }
            if(pa.size()!=pb.size()){
                cout<<-1<<endl;
                return;
            }
            for(int i=0;i<pa.size();i++){
                ans+=abs(pa[i]-pb[i]);
            }
            
        }
        cout<<ans/2<<endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}