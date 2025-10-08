#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        vector<int> arr(l);
        for(int j=0;j<l;j++){
            cin>>arr[j];
        }
        vector<int> prevDef(l,-1);
        int prv = -1; 
        for (int i = 1; i < l; i++) { 
            if (arr[i] != arr[i - 1]) 
                prv = i - 1;
            prevDef[i] = prv;
        }
        int q;
        cin>>q;
        while (q--) { 
			int l, r;
			cin >> l >> r; 
			if (prevDef[r - 1] >= l - 1) { 
				cout << r << " " << prevDef[r - 1] + 1 << endl; 
			} else {
				cout << -1 << " " << -1 << endl; 
			}
		}
        cout<<endl;
    }
    return 0;
}
