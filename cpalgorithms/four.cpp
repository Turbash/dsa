#include <bits/stdc++.h>
using namespace std;
const int MOD=998244353;
int n,m,k;
long long f[2005][2005];
int main()
{
    
	cin>>n>>m>>k;
	f[1][0]=m;
	for(int i=1;i<n;++i)
		for(int j=0;j<=k;++j)
			(f[i+1][j]+=f[i][j])%=MOD,
			(f[i+1][j+1]+=f[i][j]*(m-1))%=MOD;
	cout<<f[n][k]<<endl;
}
