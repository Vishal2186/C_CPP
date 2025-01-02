#include<stdio.h>
int main(){
    int n;
    char v;
    printf("Enter your age = ");
    scanf("%d",&n);
    if(n>=18){printf("Your are an adult, show me yore id :");scanf("%c",&v);
     if(v=='k'){printf("You can vote now...");}
     else{printf("if you don't have any id, you cannot vote...");}
    }
    else{printf("Your are not an adult so you can't vote...");}
    return 0;
}