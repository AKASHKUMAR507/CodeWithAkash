#include <iostream>
using namespace std;

int main(){
    int a;
    int r,b;
    cin>>a>>b;
    r = a>b?a-b:b-a;
    cout<<r;

    return 0;
}