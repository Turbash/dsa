#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

map<vector<int>, int> compress;
int nxtId, ans;

vector<vector<int>> children;

map<int, vector<int>> dfs(int v)
{

    map<int, vector<int>> cur;

    cur[0] = {v}; 

    for (int u : children[v])
    {
        auto child = dfs(u);

        if (child.size() > cur.size())
            swap(child, cur);

        for (auto &it : child)
        {
            int d = it.first + 1;
            auto &vec = cur[d];
            vec.insert(vec.end(), it.second.begin(), it.second.end());
        }
    }

    map<int, vector<int>> ret;

    for (auto &it : cur)
    {
        auto vec = it.second;
        sort(vec.begin(), vec.end());

        if (!compress.count(vec))
            compress[vec] = ++nxtId;

        int id = compress[vec];
        ans++;

        ret[it.first] = {id};
    }

    return ret;
}

void solve()
{

    int n;
    cin >> n;

    children.assign(n + 1, {});

    for (int i = 2; i <= n; i++)
    {
        int p;
        cin >> p;
        children[p].push_back(i);
    }

    compress.clear();
    nxtId = 0;
    ans = 0;

    dfs(1);

    cout << nxtId << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();
}