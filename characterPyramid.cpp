#include<iostream>
using namespace std;

int main()
{

  cout<<"enter the number for star pattern"<<endl;
  cin>>n;

  char ch =  'A';
    for(int i = 1; i<=n; i++){
          for(int j = 1; j<=i; j++){
            cout<<ch;
            ch++;
          }
          cout<<endl;
    }
    
    return 0;
}