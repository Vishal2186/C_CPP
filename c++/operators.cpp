#include<iostream>
using namespace std;
int  a , b;

int main() {

cout<<"Enter a = "; cin>>a;
cout<<"Enter b = "; cin>>b;


cout<<"\narithmetic operators"<<endl;

cout<<"a+b = " <<a+b<<endl;
cout<<"a-b = " <<a-b<<endl;
cout<<"a*b = " <<a*b<<endl;
cout<<"a/b = " <<a/b<<endl;
cout<<"a%b = " <<a%b<<endl;
cout<<"++a = " <<++a<<endl;
cout<<"--a = " <<--a<<endl;
cout<<"a++ = " <<a++<<endl;
cout<<"a-- = " <<a--<<endl;

cout<<"\ncomparison operators"<<endl;

cout<<" a==b = "<<(a==b)<<endl;
cout<<" a!=b = "<<(a!=b)<<endl;
cout<<" a<=b = "<<(a<=b)<<endl;
cout<<" a>=b = "<<(a>=b)<<endl;
cout<<" a<b = "<<(a<b)<<endl;
cout<<" a>b = "<<(a>b)<<endl;

cout<<"\nlogical operators"<<endl;

cout<<"(a==b)&&(a<b) = "<<((a==b)&&(a<b))<<endl;
cout<<"(a==b)||(a<b) = "<<((a==b)||(a<b))<<endl;
cout<<"(!(a==b)) = "<<(!(a==b))<<endl;



return 0;
}