#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
        cin>>a[i];
   }
   int easy = 0;
   for(int i=0;i<n;i++){
    if(a[i]==0)
        easy++;
   }
   if(easy<2){
    cout<<-1<<endl;
    return;
   }
   if(a[0]==0 && a[n-1] == 0){
    cout<<0<<endl;
    return;
   }
   if(a[0]!=0 && a[n-1]!=0){
    cout<<2<<endl;
    return;
   }
   cout<<1<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}