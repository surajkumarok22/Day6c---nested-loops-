#include<iostream>
using namespace std;

int main()
{
    int n;
  cout<<"enter the number for star pattern"<<endl;
  cin>>n;

    for(int i = 1; i<=n; i++){
          for(int j = 1; j<=i; j++){
            cout<<"*";
          }
          cout<<endl;
    }
    
    return 0;
}