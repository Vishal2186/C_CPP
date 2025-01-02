#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}
int main(){
    int num1,num2;
    cout<<"Enter num1 = ";cin>>num1;
    cout<<"Enter num2 = ";cin>>num2;
    cout<<"Before num1 was "<<num1<<" and num2 was "<<num2<<endl;   
      swap(&num1,&num2);
       cout<<"After num1 is "<<num1<<" and num2 is "<<num2;
    return 0;
}
    