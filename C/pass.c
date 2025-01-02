#include<stdio.h>
int main(){
char pass1,pass2,pass3,pass4,pass5,pass6,pass7,pass8,pass9,pass10,pass11;
printf("Enter the password : ");scanf("%c",&pass1);scanf("%c",&pass2);scanf("%c",&pass3);scanf("%c",&pass4);scanf("%c",&pass5);scanf("%c",&pass6);scanf("%c",&pass11);scanf("%c",&pass7);scanf("%c",&pass8);scanf("%c",&pass9);scanf("%c",&pass10);
if((pass1 == 'v')&&(pass2 == 'i')&&(pass3 == 's')&&(pass4 == 'h')&&(pass5 == 'a')&&(pass6 == 'l')&&(pass7 == '1')&&(pass8 == '2')&&(pass9 == '3')&&(pass10 == '4')&&(pass11 == '@')){printf("welcom to the system");}
else{printf("Entered password is incorrect");}
return 0;}