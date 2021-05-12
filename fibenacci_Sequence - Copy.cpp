#include <iostream>

using namespace std;

void fib(int n){
    int n1 = 0;
    int n2 = 1;
    int nextTerm;
    for(int i = 1;i<=n;i++){
        cout<<n1<<endl;
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}