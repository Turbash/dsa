#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d-b<0){
            cout<<-1<<endl;
            continue;
        }
        if(c-a>d-b){
            cout<<-1<<endl;
            continue;
        }
        int upsteps=d-b;
        int currx=a+upsteps;
        int leftsteps=c-currx;
        cout<<upsteps+abs(leftsteps)<<endl;
    }
}