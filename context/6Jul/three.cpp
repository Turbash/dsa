#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, k;
    cin >> n >> k;
    // Your code here'
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int many = 0;
    int freq = 1;
    int now = a[0];
    vi freqs;
    set<int> st;
    int length = n;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == now)
        {
            freq++;
        }
        else
        {
            freqs.push_back(freq);
            now = a[i];
            freq = 1;
            many++;
        }
    }
    if (freq > 0)
    {
        freqs.push_back(freq);
        many++;
    }
    sort(freqs.begin(), freqs.end());
    int ans = 0;
    for(int i=0;i<freqs.size();i++){
        if(length == k)
            ans++;
        if(k>length && (k-length)%many==0)
            ans++;
        int am = 1;
        int j = i+1;
        while(j<freqs.size() &&  freqs[i]==freqs[j]){
            am++;
            j++;
        }
        length -= many;
        many -= am;
        i+= am;
    }
    ans = st.size();
    cout << ans << endl;
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