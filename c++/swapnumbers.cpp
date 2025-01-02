#include<iostream>
using namespace std;
int main(){

int a = 5, b = 1, temp;

cout << "Before swapping." << endl;

cout << " a = " << a <<" ,b = " << b << endl; 

temp = a;

a = b;

b = temp;

cout << "\nAfter swapping." << endl;

cout << "a= " << a << ", b = " << b << endl;
system("pause");
}