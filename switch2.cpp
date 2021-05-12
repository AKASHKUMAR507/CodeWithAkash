#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter a Alphabet : ";
    cin>>c;
    switch (c)
    {
    case 'a':
        cout<<"It is a vowel: "<<endl;
        break;
    case 'e':
        cout<<"It is a vowel: "<<endl;
        break;
    case 'i':
        cout<<"It is a vowel: "<<endl;
        break;
    case 'o':
        cout<<"It is a vowel: "<<endl;
        break;
    case 'u':
        cout<<"It is a vowel: "<<endl;
        break;
    
    default:
        cout<<"It is Consonant : "<<endl;
        break;
    }
    
    return 0;
}