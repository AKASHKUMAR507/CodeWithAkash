#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<" 1 ";
            }else{
                cout<<" 0 ";
            }
        }cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j = 1; j<=i; j++){
            if((i+j)%2==0){
                cout<<" 1 ";
            }else{
                cout<<" 0 ";
            }
        }cout<<endl;
        
    }
    return 0;
}