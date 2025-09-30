#include<iostream>
using namespace std;

int isAttacking(int a, int b, int x1, int y1, int x2, int y2){
    if(x1+a==x2 && y1+b==y2) return 1;
    if(x1+a==x2 && y1-b==y2) return 1;
    if(x1-a==x2 && y1+b==y2) return 1;
    if(x1-a==x2 && y1-b==y2) return 1;
    if(a!=b){
        if(x1+b==x2 && y1+a==y2) return 1;
        if(x1+b==x2 && y1-a==y2) return 1;
        if(x1-b==x2 && y1+a==y2) return 1;
        if(x1-b==x2 && y1-a==y2) return 1;
    }
    return 0;
}

int findAttacks(int a, int b, int x1, int y1, int x2, int y2){
    int ans=0;
    ans+=isAttacking(a,b,x1+a,y1+b,x2,y2);
    ans+=isAttacking(a,b,x1+a,y1-b,x2,y2);
    ans+=isAttacking(a,b,x1-a,y1+b,x2,y2);
    ans+=isAttacking(a,b,x1-a,y1-b,x2,y2);
    if(a!=b){
        ans+=isAttacking(b,a,x1+b,y1+a,x2,y2);
        ans+=isAttacking(b,a,x1+b,y1-a,x2,y2);
        ans+=isAttacking(b,a,x1-b,y1+a,x2,y2);
        ans+=isAttacking(b,a,x1-b,y1-a,x2,y2);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        int b;
        cin>>a>>b;
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans=findAttacks(a,b,x1,y1,x2,y2);
        cout<<ans<<endl;
    }
}