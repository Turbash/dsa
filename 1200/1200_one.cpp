#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> findMax3(vector<int> &arr) {
	vector<pair<int, int>> tmp(arr.size());

	for (int i = 0; i < tmp.size(); i++) { 
		tmp[i].first = arr[i];
		tmp[i].second = i;
	}

	sort(tmp.rbegin(), tmp.rend());
	vector<int> ans(3);

	for (int i = 0; i < 3; i++){
		ans[i] = tmp[i].second;
	}
    cout<<endl;

	return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int days;
        cin>>days;
        vector<int> a;
        vector<int> b;
        vector<int> c;

        for(int j=0;j<days;j++){
            int ele;
            cin>>ele;
            a.push_back(ele);
        }
        for(int j=0;j<days;j++){
            int ele;
            cin>>ele;
            b.push_back(ele);
        }
        for(int j=0;j<days;j++){
            int ele;
            cin>>ele;
            c.push_back(ele);
        }

        vector<int> ai=findMax3(a);
        vector<int> bi=findMax3(b);
        vector<int> ci=findMax3(c);
        int ans=INT_MIN;
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                for(int l=0;l<3;l++){
                    if((ai[j]==bi[k] || bi[k]==ci[l] || ai[j]==ci[l])){
                        continue;
                    }
                    int sum = a[ai[j]]+b[bi[k]]+c[ci[l]];
                    ans = max(ans,sum);
                }
            }
        }
        cout<<ans<<endl;
    }
}