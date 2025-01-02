#include<stdio.h>
int volume(double r, int h){
    return(3.14 *r *r *h);
}
int volume(int a){
    return(a*a*a);
}
int volume(int l,int b,int h){
    return(l*b*h);
}
int main(){
    printf("%d",volume(5,9));
    printf("\n%d",volume(5));
    printf("\n%d",volume(5,9,7));
    
    return 0;
}