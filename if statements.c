#include<stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Enter 2 numbers");
    scanf("%d%d",&num1,&num2);
    if (num1 == num2){
        printf("they are equal");
    }
    if (num1 < num2){
        printf("%d is less than %d",num1,num2);
    }
    if (num1 > num2){
        printf("%d is greater than %d",num1,num2);

    }
}
