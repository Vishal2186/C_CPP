#include<iostream>
using namespace std;
int main(){
    int n;
    char v;
    cout<<"Enter your age : ";cin>>n;
    if(n>=18){
        cout<<"show me your id : ";cin>>v;
        if(v=='K'){cout<<"Now you can vote...";}
        else{cout<<"If you don't have any id you cannot vote...";}
    }else{cout<<"You are not an adult...";}
    return 0;
}