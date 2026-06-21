#include <bits/stdc++.h>

using namespace std;
using vl= vector<long long>;

void solve() {
	int n;
	cin >> n;
    vl a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
    long long ans = LLONG_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,a[i]);
        if(i+1<n && a[i]>a[i+1]){
            int temp = a[i+1];
            a[i+1]=temp+a[i];
            a[i]=temp;
            ans=a[i+1];
        }
    }
    cout << ans << endl;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	cin.sync_with_stdio(false); // fast IO

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}