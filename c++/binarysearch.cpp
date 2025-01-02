#include<iostream>
using namespace std;
int binary(int arr[],int t,int s){
    int mid = arr[s/2];
    int n = 10;
    while(n){
        if(mid == t){cout<<"Found if! it's the ["<<mid<<"]th element of the array...";return 0;}
    
        
    n--;}
    cout<<"Not found!!!";
    return 0;
}
int main(){
    int target;
    int arr[10] = {11,23,34,35,45,56,57,68,78,79};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"What you are searching for...";cin>>target;
    cout<<binary(arr,target,size);
    return 0;
}