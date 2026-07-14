#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
vector<long long> factTable;
vector<pair<long long, long long>> allCombos;
void caluclateAllCombos(int idx, long long curr, long long n, int howMany)
{
    if(idx == n){
        allCombos.push_back({curr, howMany});
        // cout << "curr: " << curr << endl;
        return;
    }
    caluclateAllCombos(idx + 1, curr, n, howMany);
    caluclateAllCombos(idx + 1, curr + factTable[idx], n, howMany + 1);
}
void solve()
{
    long long n;
    cin >> n;
    long long ans = 0;
    long long number = n;
    while (number > 0)
    {
        int bit = number % 2;
        if (bit == 1)
            ans++;
        number /= 2;
    }
    long long alt = LLONG_MAX;
    //findAllcombos
    for (int i = 0; i < allCombos.size(); i++)
    {
        long long combo = allCombos[i].first;
        int howMany = allCombos[i].second;
        if (combo <= n)
        {
            long long diff = n - combo;
            long long twoalt = howMany;
            while (diff > 0)
            {
                int bit = diff % 2;
                if (bit == 1)
                    twoalt++;
                diff /= 2;
            }
            alt = min(alt, twoalt);
        }
    }
    // cout<< ans << " " << alt << endl;
    cout << min(ans, alt) << endl;
    // Your code here
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 1; i <= 15; i++)
    {
        long long fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        factTable.push_back(fact);
    }
    caluclateAllCombos(0, 0, 15, 0);
    sort(allCombos.begin(), allCombos.end());
    int t;
    cin >> t;
    while (t--)
        solve();
}