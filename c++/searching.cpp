#include<iostream>
using namespace std;
int main(){

int c;
  cout<<"How many elements in the array = ";cin>>c;
  char arr[c];
  for (int i = 0; i < c; i++)
  {   
    cout<<"\nelement no. "<<i<<" = ";cin>>arr[i];
  }

cout<<"Inserted array = {";
  for (int i = 0; i < c; i++)
  {
    cout<<arr[i]<<",";
  }
cout<<"}";
  


    char n;
    cout<<"\nWhat you want to search : ";cin>>n;
    for (int i = 0; i < c; i++)
    {
        int temp = arr[i];
       if(temp == n){cout<<"found it! "<<n<<" is the "<<i<<" element of the array";return 1;}
        if(i==c-1&&temp != n ){cout<<"didn't found it maybe "<<n<<" is not here";return 1;}
    }
    
    return 0;
}