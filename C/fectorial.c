#include<stdio.h>

long int fect(int n){
    if(n<=1){return 1;}
    return n*fect(n-1);
}

int main(){
    long int f;
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    f = fect(n);
    printf("the fectorial of %d is = %ld",n,f);
    return 0;
}