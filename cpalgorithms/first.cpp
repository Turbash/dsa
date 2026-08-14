#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, r;
    cin >> n >> r;

    if(r < n ){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    if(r ==1 && n == 1){
        cout << 0 << endl;
        cout << "T" << endl;
        return;
    }

    string ans(n-1, 'B');
    string alt(n-1, 'T');

    string final;
    int minmistakes = INT_MAX;

    for(int i = 1; i < r; i++){

        int a = r;
        int b = i;
        char now = 'T';
        int j = n - 2;
        int mistakes = 0;

        while(a > 0 && b > 0 && j >= 0){
            if(b > a){
                swap(a, b);
                now = (now == 'T') ? 'B' : 'T';
            }

            ans[j] = now;

            if(j < n-2 && ans[j] == ans[j+1]){
                mistakes++;
            }

            a = a - b;
            j--;
        }

        if(a == 1 && b == 1){
            if(ans[0] == 'T'){
                mistakes++;
            }

            if(mistakes < minmistakes){
                minmistakes = mistakes;
                final = "T" + ans;
            }
        }


        int a1 = r;
        int b1 = i;
        now = 'B';
        j = n - 2;
        int mistakes1 = 0;

        while(a1 > 0 && b1 > 0 && j >= 0){
            if(a1 < b1){
                swap(a1, b1);
                now = (now == 'T') ? 'B' : 'T';
            }

            alt[j] = now;

            if(j < n-2 && alt[j] == alt[j+1]){
                mistakes1++;
            }

            a1 = a1 - b1;
            j--;
        }

        if(a1 == 1 && b1 == 1){
            if(alt[0] == 'T'){
                mistakes1++;
            }

            if(mistakes1 < minmistakes){
                minmistakes = mistakes1;
                final = "T" + alt;
            }
        }
    }

    if(minmistakes != INT_MAX){
        cout << minmistakes << endl;
        cout << final << endl;
        return;
    }

    cout << "IMPOSSIBLE" << endl;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    solve();
}