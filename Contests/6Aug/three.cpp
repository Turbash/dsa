#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

struct SegTree {
    struct Node {
        long long sum = 0;
        int cnt = 0;
    };

    int n;
    vector<long long> vals;
    vector<Node> st;

    SegTree(vector<long long> v) {
        vals = v;
        n = vals.size();
        st.assign(4 * n + 5, {});
    }

    void update(int p, int l, int r, int idx, long long val) {
        if (l == r) {
            st[p].cnt++;
            st[p].sum += val;
            return;
        }

        int mid = (l + r) >> 1;

        if (idx <= mid)
            update(p << 1, l, mid, idx, val);
        else
            update(p << 1 | 1, mid + 1, r, idx, val);

        st[p].cnt = st[p << 1].cnt + st[p << 1 | 1].cnt;
        st[p].sum = st[p << 1].sum + st[p << 1 | 1].sum;
    }

    void add(long long val) {
        int idx = lower_bound(vals.begin(), vals.end(), val) - vals.begin() + 1;
        update(1, 1, n, idx, val);
    }

    long long need;

    int dfs(int p, int l, int r) {
        if (need <= 0) return 0;

        if (l == r) {
            long long value = vals[l - 1];
            int take = (need + value - 1) / value;
            take = min(take, st[p].cnt);
            need -= 1LL * take * value;
            return take;
        }

        int mid = (l + r) >> 1;

        if (st[p << 1 | 1].sum >= need)
            return dfs(p << 1 | 1, mid + 1, r);

        need -= st[p << 1 | 1].sum;

        return st[p << 1 | 1].cnt + dfs(p << 1, l, mid);
    }

    int query(long long x) {
        if (st[1].sum < x)
            return INT_MAX;

        need = x;
        return dfs(1, 1, n);
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    // Your code here
    vector<long long> stab(n);
    vector<long long> comp;
    vector<vector<long long>> tow(n);
    for(int i=0;i<n;i++){
        cin>>stab[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=m;j++){
            long long x;
            cin>>x;
            tow[i].push_back(x);
            comp.push_back(x);
        }
    }
    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());

    SegTree seg(comp);

    int ans = m;       

    for (int i = n-1; i >= 0; i--) {

        for (int j = 0; j < m; j++)
            seg.add(tow[i][j]);

        ans = min(ans, seg.query(stab[i]));
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}