#include<iostream>
using namespace std;
int main(){
    int mark[]={33,44,55,66};
    int* a = mark ;
    for(int i = 0; i < 4; i++)
    {cout<<"the value of mark ["<<i<<"]"<<" = "<<*(a++)<<endl; }
    return 0;

}  