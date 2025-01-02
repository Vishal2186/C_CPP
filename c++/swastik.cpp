#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n: ";cin>>n;
int v;

 if((n - (n/2) == n/2))
{v= n+1;}
 else if( n==1){v=n+2;}
 else{ v=n;}
 int c;
c = v-v/2;


    for (int i = 1; i <=v; i++)

    {
        for (int j = 1; j <=v; j++)
        {
            if(i==c || j==c || (i==1 && j>c) || (i<c && j==1) || (i==v && j<c) || (i>c && j==v)){cout<<"* ";}
            else{cout<<"  ";}
    
        }
 
    cout<<endl;}
    
    return 0;
}



/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";cin>>n;
    int v;

    if(n<=6 ){if(n-n/2==n/2)
    {v=n+1;}
    else if
    ( n==1){v=n+2;}
    else
    {v=n;}}

else if (n>8){if(n-n/2==n/2)
    {v=n+1;} else
    {v=n;}}

    else
    {  if(n-n/2==n/2)
    {v=n;}   
    
    else
    {v=n+1;}}
         


    int c;
    c = (v-v/2);
    
    for(int i=1; i<=v; i++)
    {
        for(int j=1; j<=v; j++)
        {
            if( i==c || j==c || (i==1 && j>c)  || 
             (i==v && j<c) || (i<c && j==1) || 
             (i>c && j==v)  ||  n>6 && ((i==c+1 || j==c+1) 
        || (i==2 && j>c+1) || 
            (i==v-1 && j<c) || (i>c && j==v-1) ||  (i<c && j==2)  ) )
            
            
            
            
            {
                cout<<" *";
            } 
            else{
                cout<<"  ";
            }
        }cout<<endl;
        }


    return 0;
}*/