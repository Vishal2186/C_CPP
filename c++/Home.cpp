#include<iostream>
using namespace std;
int main(){
  cout<<" N must be greater than 7"<<endl;
int n;
cout<<"Enter N : ";cin>>n;
int block = n+(n-1);
int door = n;
int window = door/2+1;

     if(n>7) { for(int i=n;i>=1;i--){
      for(int j=1;j<i;j++){
         cout<<"  ";
      }
      int star = (2*n+1)-2*i;
     for(int j=1; j<=star; j++){
         cout<<" *"; 
     }
cout<<endl;
    
}
    
  for(int i=1;i<=block;i++){
      for(int j=1;j<=block;j++){
        if(i>door && (j>1 && j<door-2)|| i>door && j>n+n/4 && i<door+(n/2 + 1) && j<n+(n/4+n/2)){cout<<"  ";}
        else{cout<<" *";}
      }cout<<endl;}

}else{ cout<<"invalid";}
       
      


return 0;}
