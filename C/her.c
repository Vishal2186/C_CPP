#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,v=1;
    printf("Enter a : ");scanf("%d",&a);
     if(a%2==0){n=a+1;}
      else{n=a;}
    //int c=(n/2)+1;
    int o=n/2;
    
    //*******************--------K--------*******************//
    
    for(int i=1;i<=n;i++){
      printf("**");
        for (int j = 1; j <= n; j++)
        { 
            if( j==abs(o))
            {
            printf("**");}
            else{
                printf("  ");
            }
            
   
        }printf("\n"); 

     //v++;
     //c--;
    o--;
 }printf("\n"); 

  //*******************--------H--------*******************//

for (int i = 1; i <= n; i++)
{
  for (int j = 1; j <= n; j++)
  {
    if(j==1||i==n-n/2&&j<=n-n/2||j==n-n/2&&i>n-n/2){printf("**");}
    else{printf("  ");}
  
  }printf("\n"); 
  
}printf("\n"); 

     //*******************--------u--------*******************//

     for (int i = 1; i <= n; i++)
{
  for (int j = 1; j <= n; j++)
  {
    if(j==1&&i<=n-n/2||i==n-n/2&&j<=n-n/2||j==n-n/2&&i<=n){printf("**");}
    else{printf("  ");}
  
  }printf("\n"); 
  
}printf("\n"); 


//*******************--------s--------*******************//
    

     for (int i = 1; i <= n; i++)
{
  for (int j = 1; j <= n; j++)
  {
    if(i==1&&j<=n-n/2||j==1&&i<=n/2||i==n-n/2&&j<=n-n/2||j==n-n/2&&i>n-n/2||i==n&&j<n-n/2){printf("**");}
    else{printf("  ");}
  
  }printf("\n"); 
  
}printf("\n"); 


//*******************--------h--------*******************//

for (int i = 1; i <= n; i++)
{
  for (int j = 1; j <= n; j++)
  {
    if(j==1||i==n-n/2&&j<=n-n/2||j==n-n/2&&i>n-n/2){printf("**");}
    else{printf("  ");}
  
  }printf("\n"); 
  
}printf("\n"); 


//*******************--------i--------*******************//

for (int i = 1; i <= n; i++)
{
  for (int j = 1; j <= n; j++)
  {
    if(i==1&&j<=n-n/2+1||j==(n-n/2)/2+1&&i<n||i==n&&j<=n-n/2+   1){printf("**");}
    else{printf("  ");}
  
  }printf("\n"); 
  
}printf("\n");

    return 0;
}
