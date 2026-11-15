#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve()
{
    long long n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int i = 0;
    int j = 0;

    int nm = 0;
    int mis = -1;
    int first = 1;
    while (i < n && j < n)
    {
        if (a[i] != b[j])
        {
            if (mis == -1)
            {
                mis = a[i];
                i++;
                nm = 1;
            }
            else
            {
                if (mis == b[j])
                {
                    nm = 0;

                    j++;
                    break;
                }
                else
                {
                    first = 0;
                    break;
                }
            }
        }
        else
        {
            i++;
            j++;
        }
    }

    if(first && nm == 1){
        if(j<n && mis == b[j]){
            first = 1;
            j++;
        }else{
            first = 0;
        }
    }
    if(first && nm == 0){
        while(i<n && j<n && a[i] == b[j]){
            i++;
            j++;
        }
        if(i<n || j<n){
            first = 0;
        }
    }
    int sec = 1;
    i = 0;
    j = 0;
    mis = -1;
    nm = 1;
    while (i < n && j < n)
    {
        if (a[i] != b[j])
        {
            if (mis == -1)
            {
                mis = b[j];
                j++;
                nm = 1;
            }
            else
            {
                if (mis == a[i])
                {
                    nm = 0;
                    i++;
                    break;
                }
                else
                {
                    sec = 0;
                    break;
                }
            }
        }
        else
        {
            i++;
            j++;
        }
    }
    if(sec && nm == 1){
        if(i<n && mis == a[i]){
            sec = 1;
            i++;
        }else{
            sec = 0;
        }
    }
    if(sec && nm == 0){
        while(i<n && j<n && a[i] == b[j]){
            i++;
            j++;
        }
        if(i<n || j<n){
            sec = 0;
        }
    }
    if(first || sec){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}