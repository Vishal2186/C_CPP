#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
       //printf("%d",n); printf("%s"," * "); printf("%d",i); printf("%s"," = "); printf("%d\n",n*i);
       printf("\n%d * %d = %d",n,i,n*i);
    }
    return 0;
}