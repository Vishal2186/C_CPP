// #include<iostream>
// using namespace std;

// // function prototype
// // type function-name (arguments);
// int sum(int a, int b);
// void g();


// int main(){
//  int num1,num2;
//  // num1 nad num2 are actual parameters 
//     cout<<"Enter num1 = ";cin>>num1;
//     cout<<"\nEnter num2 = ";cin>>num2;
//     cout<<"\nthe sum of num1 and num2 is = "<<sum(num1,num2);
//  g();
// /* funcution void g() will not take or return
//  any value it will just do his work and that is printing "hello world"*/
// return 0;}



// int sum(int a,int b){
//     // formal parameters a nad b will be taking values from actual parameters num1 and num2
//     int c=a+b;
//     return c;}

// void g(){cout<<"\nHello world";}


//----------*******-----call by value and reference------******-------//
// #include<iostream>
// using namespace std;

// //this will not work
// // void swap(int a , int b){
// //     int temp = a ;
// //     a = b ;
// //     b = temp ;
// // void swapPointer(int* a , int* b){
// //     int temp = *a ;
// //     *a = *b ;
// //    *b = temp ;}

// void swapReferencvar(int &a , int &b){
//    int temp = a ;
//       a = b ;
//      b = temp ;}

// int main(){
//     int num1,num2;
//     cout<<"Enter num1 = ";cin>>num1;
//     cout<<"Enter num2 = ";cin>>num2;
//     cout<<"Before num1 was "<<num1<<" and num2 was "<<num2<<endl;
//    // swap(num1,num2);           //this will not work
//    //swapPointer(&num1,&num2);   //this will swap a and b using pinter reference 
//     swapReferencvar(num1,num2);  //this will swap a and b using reference variables 
//        cout<<"After num1 is "<<num1<<" and num2 is "<<num2;

//     return 0;
// }


//-----------------***********------------RECURSIONS OF FUNCTION------------**************--------------//

// #include<iostream>
// using namespace std;

// int factorial(int n){
//    if(n<=1){return 1;}
//    else{return n * factorial(n-1);}
// }

// //working of the function 
// // factorial(4) = 4 * factorial(3) 
// // factorial(4) = 4 * 3 * factorial(2) 
// // factorial(4) = 4 * 3 * 2 * factorial(1) 
// // factorial(4) = 4 * 3 * 2 * 1 = 24

// int main(){

//    //factorial of a number:
//    // 6! = 6*5*4*3*2*1 = 720
//    // 0! = 1
//    // 1! = 1
//    // factorial of n! = n * (n-1)!

//    int a;
//    cout<<"Enter a = ";cin>>a;
//    cout<<" the factorial of "<<a<<" is "<<factorial(a);
//    return 0;
//}

//-----------------***********------------RECURSIONS ex. WITH FIBONACCI SEQUENCE------------**************--------------//
//1,1,2,3,5,8,13,21,34,55,89,144,233,377...
// n = (n-1) + (n-2)

#include<iostream>
using namespace std;

int fib(int n){
   if(n<=1){return 1;}
   else{return (fib(n-1) + fib(n-2));}
}

int main(){

   int a;
 cout<<"Enter a = ";cin>>a;
 cout<<" the value at the "<<a<<"th position is = "<<fib(a);

   return 0;
}