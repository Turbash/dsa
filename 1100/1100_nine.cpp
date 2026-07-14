#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    unsigned long long n, c;
    cin >> n >> c;
    vector<unsigned long long> a(n);
    for (unsigned long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    // unsigned long long test = 0;
    // unsigned long long at = 113385729;
    // for(unsigned long long i = 0; i < n; i++) {
    //     unsigned long long side = a[i] + 2 * at;
    //     test += side * side;
    // }
    // cout<<test<<endl;
    unsigned long long l = 1, r = 1e9;  
    unsigned long long ans = 0;
    while (l <= r) {
        unsigned long long mid = l + (r - l) / 2;
        unsigned long long area = 0;
        for (unsigned long long i = 0; i < n; i++) {
            unsigned long long side = a[i] + 2 * mid;
            area += side * side;
            if(area > c) {
                break;
            }
        }   
        if(area == c) {
            ans = mid;
            break;
        }
        else if(area > c) {
            // cout<< "area: " << area << " c: " << c << endl;
            r = mid - 1;
        } else {
            // cout<< "area: " << area << " c: " << c << endl;
            l = mid + 1;
        }
        // cout<< "l: " << l << " r: " << r << " area: " << area<< "mid:"<<mid<< endl;
    }
    cout<< ans << endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}