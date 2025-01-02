#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
    int i,j,a=n/2;
    for(i=0;i<n;i++)
    {
         printf("**");
    for(j=0;j<=n/2;j++)
    {
        if(j==abs(a)){printf("**");}
        else{printf(" ");}}printf("\n");a--;}
    return 0;

}