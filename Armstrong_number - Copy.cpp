#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum =0;
    int orignalN =n;
    while (n>0)
    {
        int lastDigit=n%10;
        sum+= pow(lastDigit,3);
        n = n/10;
    }
    if(sum==orignalN){
        cout<<"Armstrong number "<<endl;
    }
    else{
        cout<<"Not Armstrong number "<<endl;
    }
    
    return 0;
}