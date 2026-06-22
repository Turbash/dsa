#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> nearEn(n, -1);
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        --a, --b;

        if(a > b) swap(a, b);
        nearEn[b] = max(nearEn[b], a);
    }
    vector<int> maxLeft(n, 0);
    for(int i=1;i<n;i++){
        maxLeft[i] = max(maxLeft[i-1], nearEn[i] + 1);
    }
    long long ans = 0;
    for(int i=0;i<n;i++){
        ans += i-maxLeft[i]+1;
    }
    cout << ans << endl;
}

int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}