#include <iostream>
using namespace std;

int add(int a,int b){
    int sum = a+b;
    return sum;
}
int main(){

    int num1,num2;
    cin>>num1>>num2;
    
    cout<<add(num1,num2)<<endl;
    
    return 0;
}