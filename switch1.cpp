#include <iostream>
using namespace std;

int main(){
    
    int num1,num2;
    cout<<"Enter a two number : ";
    cin>>num1>>num2;
    char op;
    cout<<"Enter Oprator ( + , - , * , / , % ) "<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<num1+num2<<endl;
        break;
    
    case '-':
        cout<<num1-num2<<endl;
        break;
    
    case '*':
        cout<<num1*num2<<endl;
        break;
    
    case '/':
        cout<<num1/num2<<endl;
        break;
    
    case '%':
        cout<<num1%num2<<endl;
        break;
    
    default:
        cout<<"Wrong Opearator chose again : ";
        break;
    }




    return 0;
}