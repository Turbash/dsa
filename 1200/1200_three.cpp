#include <bits/stdc++.h>   
using namespace std;

long long sumOfAp(long long s, long long e){
    long long sum = (e+s)*((e-s)+1)/2;
    return sum;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        long long maxs = n/x;
        long long mins = n/y;
        long long lcm = (x*y)/__gcd(x,y);
        long long commons = n/lcm;  
        maxs-=commons;
        mins-=commons;  
        long long maxsum = sumOfAp(n-maxs+1, n);
        long long minsum = sumOfAp(1, mins);
        cout<<maxsum-minsum<<endl;
    }
}