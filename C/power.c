#include<stdio.h>
int power(int b, int v){
    int j = 1;
    for (int i = 1; i <= v; i++)
    {
       j *= b;
    }return j;
    
}
int main(){
    int n,p;
    printf("Enter the number = ");
    scanf("%d",&n);
    printf("Enter the power = ");
    scanf("%d",&p);
   printf("%d's power %d = %d",n,p,power(n,p));
    return 0;
}