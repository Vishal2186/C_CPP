#include<iostream>
using namespace std;
int main() {
int num1 , num2 , num3 , num4;

cout<<"Enter number 1 = "; cin>> num1;

cout<<"Enter number 2 = "; cin>> num2;

cout<<"Enter number 3 = "; cin>> num3;

cout<<"Enter number 4 = "; cin>> num4;
cout<<endl;



if (num1>0) {cout<<num1<<" is positive"<<endl;}
else if (num1<0) {cout<<num1<<" is Negetive"<<endl;}
else {cout<<num1<<" is Zero"<<endl;}

if (num2>0) {cout<<num2<<" is positive"<<endl;}
else if (num2<0) {cout<<num2<<" is Negetive"<<endl;}
else {cout<<num2<<" is Zero"<<endl;}

if (num3>0) {cout<<num3<<" is positive"<<endl;}
else if (num3<0) {cout<<num3<<" is Negetive"<<endl;}
else {cout<<num3<<" is Zero"<<endl;}

if (num4>0) {cout<<num4<<" is positive"<<endl;}
else if (num4<0) {cout<<num4<<" is Negetive"<<endl;}
else {cout<<num4<<" is Zero"<<endl;}


// -----------------if else-----------------

// if((num1>0) && (!(num1==0))) {cout<<num1<<" is Positive"<<endl; }
// else if (num1==0){cout<<num1<<" is zero"<<endl;}
// else {cout<<num1<<" is Negetive"<<endl; }

// if((num2>0) && (!(num2==0))) {cout<<num2<<" is Positive"<<endl; }
// else if (num2==0){cout<<num2<<" is zero"<<endl;}
// else {cout<<num2<<" is Negetive"<<endl; }

// if((num3>0) && (!(num3==0))) {cout<<num3<<" is Positive"<<endl; }
// else if (num3==0){cout<<num3<<" is zero"<<endl;}
// else {cout<<num3<<" is Negetive"<<endl; }

// if((num4>0) && (!(num4==0))) {cout<<num4<<" is Positive"<<endl; }
// else if (num4==0){cout<<num4<<" is zero"<<endl;}
// else {cout<<num4<<" is Negetive"<<endl; }

//   }




// -----------------switch----------------


// // switch (age)
// // {
// // case 18:
// //    cout<<"you are adult";
// //     break;

// //     case 17:
// //     cout<<"you are not adult";
// //         break;

// //     case 0:
// //     cout<<"you are not born yet";
// //     break;

// // default:
// // cout<<"dont know your age";
// //     break;
// // }
// // return 0;


return 0; }