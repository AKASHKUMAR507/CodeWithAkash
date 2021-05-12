#include <iostream>
using namespace std;

int main(){
    
    int saving;
    cin>>saving;
    if(saving>5000){
        if(saving>10000){
            cout<<"Road trip with Joyti";
        }else{
            cout<<"Shoping with Joyti";
        }
    }else if(saving>2000){
        cout<<"Go with Sakshi";
    }else{
        cout<<"Go with Friends";
    }
    
   

    return 0;
}