#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;\
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // Your code here
    unordered_map<int, int> freq;
    int maxFreq = 0;
    int sum=0;
    int whoMax = -1;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
        if(freq[a[i]]>maxFreq){
            whoMax = a[i];
        }
        maxFreq = max(maxFreq, freq[a[i]]);
        sum+=a[i];
    }
    if(maxFreq<= (n+1)/2){
        cout<<sum<<endl;
        return;
    }
    for(int length = n; length>=1; length--){
        int maxAllowed = (length+1)/2;
        if(maxFreq<=maxAllowed){
            cout<<sum-(n-length-1)*whoMax<<endl;
            return;
        }
        maxFreq--;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}