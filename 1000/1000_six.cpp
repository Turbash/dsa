#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k,q;
        cin>>n>>k>>q;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        queue<long long int> queue;
        long long int intAns=0;
        long long int finalAns=0;
        for(int i=0;i<n;i++){
            if(queue.size()>=k){
                intAns++;
                queue.pop();
            }
            if(a[i]<=q){
                queue.push(a[i]);
            }
            else{
                finalAns+=intAns*(intAns+1)/2;
                intAns=0;
                while(!queue.empty()){
                    queue.pop();
                }
            }
        }
        if(queue.size()>=k){
            intAns++;
        }
        finalAns+=intAns*(intAns+1)/2;
        while(!queue.empty()){
            queue.pop();
        }
        cout<<finalAns<<endl;
    }
    
}