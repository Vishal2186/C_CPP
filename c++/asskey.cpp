#include<iostream>
using namespace std;
int main(){
  int n;
  char a = 65;
  char b = 97;
  int l = 1;
  cout<<"Enter n = ";cin>>n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
       if(l%2!=0){cout<<a<<" ";}
       else{cout<<b<<" ";} 
    a++;b++;l++;}
    cout<<endl;
    
  }

  return 0;
}