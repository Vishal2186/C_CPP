#include<stdio.h>
void triangle_area(float h, float b){
    float area = (h*b)/2;
    printf("\narea of the triangle = %f",area);
}
void rectangl_area(float h, float w){
    float area = (h*w);
    printf("\narea of the rectangle = %f",area);
}
int main(){
    int choice;
    float a,b;
    printf("Enter 1 for area of triangle and 2 for area of rectangl: ");
    scanf("%d",&choice);
    printf("\nEnter height = ");
    scanf("%f",&a);
    printf("\nEnter base/width = ");
    scanf("%f",&b);
    switch (choice)
    {
    case 1: triangle_area(a,b);
        break;
    case 2: rectangl_area(a,b);
        break;
    
    default: printf("invalid choice");
        break;
    }

return 0;}
