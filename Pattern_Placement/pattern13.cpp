#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int spaces = (2 * n - 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }else{
                cout<<" ";
            }
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces--;
    }
    spaces = 0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=spaces;j++){
            cout<<"*";
        }
        for(int j = 1;j<=2*i-1;j++){
            if(j==1 ||j==2*i-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int j = 1;j<=spaces; j++){
            cout<<"*";
        }
        cout<<endl;
        spaces++;
    }     
    return 0;
}