#include<iostream>
using namespace std;
int main(){
    int n, reversednumber = 0, remainder;
    cout<< "Enter an integer = ";
    cin>>n;
    while(n!=0)
    {
        remainder = n % 10 ;
    reversednumber = reversednumber * 10 + remainder ;
    n/= 10 ;
    }
cout<< "reversednumber = "  <<reversednumber ; 
return 0;}