#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curr = a[0];
    int now = 1;
    vector<tuple<int, int, int>> blocks;
    int ans = n;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == curr)
        {
            now++;
        }
        else
        {
            blocks.push_back({curr, now, i - 1});
            if (now > 1)
            {
                ans -= (now - 1);
            }
            curr = a[i];
            now = 1;
        }
    }
    blocks.push_back({curr, now, n - 1});
    if (now > 1)
    {
        ans -= (now - 1);
    }
    int increase = 0;
    for (int i = 0; i < blocks.size(); i++)
    {
        auto [val, len, idx] = blocks[i];
        if (len == 1)
        {
            continue;
        }
        if (i + 1 < blocks.size())
        {
            // cout<<"Current block: " << val << " Length: " << len << " Index: " << idx << endl;
            auto [next_val, next_len, next_idx] = blocks[i + 1];
            // cout<<"Next block: " << next_val << " Length: " << next_len << " Index: " << next_idx << endl;
            if (next_len >= 2)
            {
                increase = 2;
                break;
            }
        }
        if (i + 1 < blocks.size())
        {
            auto [next_val2, next_len2, next_idx2] = blocks[i + 1];
            if (i + 2 < blocks.size())
            {
                auto [next_val3, next_len3, next_idx3] = blocks[i + 2];
                if (val != next_val3)
                {
                    increase = 1;
                }
            }
            else
            {
                increase = 1;
            }
        }
        if (i - 1 >= 0)
        {
            if (i - 2 >= 0)
            {
                auto [prev_val2, prev_len2, prev_idx2] = blocks[i - 2];
                if (val != prev_val2)
                {
                    increase = 1;
                }
            }
            else
            {
                increase = 1;
            }
        }
    }
    // cout << "Increase: " << increase << endl;
    cout << ans + increase << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}