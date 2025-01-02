#include<iostream>
using namespace std;
//int main(){

//     // int n = 0;
//     int temp;
//     int next;
//     int mark[] = {77,66,55,44,33,22,11};
//     int v = sizeof(mark)/4; 
//     cout<<"\nInserted array = {";
// for (int i = 0; i < v; i++)
// {
//     cout<<mark[i]<<",";
// }cout<<"}"<<endl;

// for (int i = 0; i < 6; i++)
// {
//     for (int j = i+1; j < 7; j++)
//     {
//         if(mark[j]<mark[i])
//         {
//             int temp = mark[j];
//             mark[j] = mark[i];
//             mark[i] = temp;
//         }
//     }
    
// }
//  cout<<"\nSorted array = {";
// for (int i = 0; i < v; i++)
// {
//     cout<<mark[i]<<",";
// }cout<<"}";
// cout<<endl;

   
    
    
    
//--------------****************----------------SELECTION SORT--------------**********************-------------------//

// int n;
//  cout<<"How many elements in the array = ";
// cin>>n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//      cout<<"Enter element no. "<<i<<" = ";
//     cin>>arr[i];
// }


// cout<<"\nInserted array = { ";
//  for (int i = 0; i < n; i++)
//  {
//     cout<<arr[i]<<",";
//  }
//  cout<<" }";




//  for (int i = 0; i < n-1; i++)
//  {
//     for (int j = i+1; j < n; j++)
//     {
//         if(arr[j]<arr[i])
//         {
//             int temp = arr[j];
//             arr[j] = arr[i];
//             arr[i] = temp;
//         }
//     }
//  }
 
 
//  cout<<"\nShorted array = { ";
//  for (int i = 0; i < n; i++)
//  {
//     cout<<arr[i]<<",";
//  }
//  cout<<" }";
 
//--------------****************----------------SELECTION SORT--------------**********************-------------------//

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l-1;
    for (int j = l; j < r; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quicksort(int arr[],int l,int r)
{
    if(l<r){
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main(){
int n;
 cout<<"How many elements in the array = ";
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
     cout<<"Enter element no. "<<i<<" = ";
    cin>>arr[i];
}


cout<<"\nInserted array = { ";
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<",";
 }
 cout<<" }";

quicksort(arr,0,4);


cout<<"\nShorted array = { ";
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<",";
 }
 cout<<" }";

 return 0;}