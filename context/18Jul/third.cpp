#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int onetozero = 0;
    int zerotoone = 0;
    int zeroCS = 0;
    int onesCs = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1 && b[i] == 0) {
            onetozero++;
        } else if(a[i] == 0 && b[i] == 1) {
            zerotoone++;
        }
        if(b[i] == 0) {
            zeroCS++;
        }
        if(a[i]==1) {
            onesCs++;
        }
    }
    if(onetozero == 0 && zerotoone > 0) {
        if(zeroCS > 0 && onesCs > 0) {
            cout << 2 << endl;
        }
        else{
            cout<<-1<<endl;
        }
        return;
    }
    if(onetozero == 0 && zerotoone == 0) {
        cout << 0 << endl;
        return;
    }
    if(onetozero % 2 == 1) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}