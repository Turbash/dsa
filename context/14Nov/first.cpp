#include <bits/stdc++.h>

using namespace std;

void solve_test_case()
{
    int n;
    long long a;
    cin >> n >> a;

    long long score_gt = 0;
    long long score_lt = 0;

    for (int i = 0; i < n; ++i)
    {
        long long v;
        cin >> v;
        if (v > a)
        {
            score_gt++;
        }
        else if (v < a)
        {
            score_lt++;
        }
    }

    if (score_gt >= score_lt)
    {
        cout << (a + 1) << "\n";
    }
    else
    {
        cout << (a - 1) << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve_test_case();
    }
    return 0;
}