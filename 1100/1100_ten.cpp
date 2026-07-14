#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
string binaryInString(int n)
{
    string s = "";
    while (n > 0)
    {
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int curr = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    string s = binaryInString(x);
    for(int i=0;i<n;i++){
        if(a[i]>x)
            break;
        string m = binaryInString(a[i]);
        int extraSet = 0;
        int diff = s.size() - m.size();
        for(int j=0;j<m.size();j++){
            if(m[j]=='1' && s[j+diff]=='0'){
                extraSet++;
            }
        }
        if(extraSet == 0){
            curr |= a[i];
        }else
            break;
    }
    for(int i=0;i<n;i++){
        if(b[i]>x)
            break;
        string m = binaryInString(b[i]);
        int extraSet = 0;
        int diff = s.size() - m.size();
        for(int j=0;j<m.size();j++){
            if(m[j]=='1' && s[j+diff]=='0'){
                extraSet++;
            }
        }
        if(extraSet == 0){
            curr |= b[i];
        }else
            break;
    }
    for(int i=0;i<n;i++){
        if(c[i]>x)
            break;
        string m = binaryInString(c[i]);
        int extraSet = 0;
        int diff = s.size() - m.size();
        for(int j=0;j<m.size();j++){
            if(m[j]=='1' && s[j+diff]=='0'){
                extraSet++;
            }
        }
        if(extraSet == 0){
            curr |= c[i];
        }else
            break;
    }
    // cout << curr << endl;
    if (curr == x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    // Your code here
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