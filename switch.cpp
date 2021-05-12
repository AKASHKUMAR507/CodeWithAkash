#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"Enter a character : ";
    cin>>button;


    // if(button=='a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"Akash"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Kanhaiya"<<endl;
    // }
    // else if(button=='d'){
    //     cout<<"Pooja"<<endl;
    // }
    // else if(button=='e'){
    //     cout<<"Rani"<<endl;
    // }
    // else if(button=='f'){
    //     cout<<"Sumit"<<endl;
    // }
    // else{
    //     cout<<"please Type more name :";

    // }

    switch (button)
    {
    case 'a':
        cout<<"Akash"<<endl;
        break;
    case 'b':
        cout<<"Sumit"<<endl;
        break;
    case 'c':
        cout<<"Ranni"<<endl;
        break;
    case 'd':
        cout<<"Raushon"<<endl;
        break;
    case 'e':
        cout<<"Rashmi"<<endl;
        break;
    case 'f':
        cout<<"Kanhaiya"<<endl;
        break;
    
    default:
        cout<<"I am still learning : "<<endl;
        
        break;
    }

    return 0;
}