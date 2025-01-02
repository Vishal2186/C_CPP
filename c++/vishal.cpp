#include<iostream>
using namespace std;
int total_subject = 5;
int main(){
    int a, b, c, d, e; 

    cout<<"Enter the marks of     HINDI = "; cin>> a; 
    cout<<"Enter the marks of   ENGLISH = "; cin>> b;
    cout<<"Enter the marks of     MATHS = "; cin>> c;
    cout<<"Enter the marks of   PHYSICS = "; cin>> d;
    cout<<"Enter the marks of CHEMESTRY = "; cin>> e; 

   float x = a+b+c+d+e ;

   float y = x/total_subject;
    
    cout<<" Total marks = "<< x;

    cout<<"   \nPERCENTAGE = "<< y;

    return 0;

}