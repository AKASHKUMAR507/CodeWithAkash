#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int number = 1;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j = 1; j<=i;j++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}