#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num,k;
        cin>>num>>k;
        string s;
        cin>>s;
        string res(num,'1');
        if(num==k){
            for(int j=0;j<num;j++){
                cout<<"-";
            }
            cout<<endl;
            continue;
        }
        int st=0;
        int stcurr=1;
        int end=num-1;
        int endcurr=1;
        for(int j=0;j<s.size();j++){

            if(s[j]=='0'){
                if(stcurr==2){
                    int first2=st;
                    while(first2-1>=0 && res[first2-1]=='2'){
                        first2--;
                    }
                    res[first2]='0';
                    res[st]='2';
                }
                else{
                    res[st]='0';
                    stcurr=0;
                }
                st++;
            }
            else if(s[j]=='1'){
                if(endcurr==2){
                    int last2=end;
                    while(last2+1<res.size() && res[last2+1]=='2'){
                        last2++;
                    }
                    res[last2]='0';
                    res[end]='2';
                }

                else{
                    res[end]='0';
                    endcurr=0;
                }
                end--;
            }
            else{
                if(stcurr==0 && endcurr==0){
                    if(st==end){
                        res[st]='0';
                        break;
                    }
                }
                res[st]='2';
                res[end]='2';
                stcurr=2;
                endcurr=2;
                st++;
                end--;
            }   
        }
        for(int j=0;j<res.size();j++){
            if(res[j]=='1')
                cout<<"+";
            else if(res[j]=='0')
                cout<<"-";
            else
                cout<<"?";
        }
        cout<<endl;

    }
    return 0;
}