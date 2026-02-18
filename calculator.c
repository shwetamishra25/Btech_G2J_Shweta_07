#include<stdio.h>
int main(){
    int choice;
    float num1, num2, result;
    printf("simple calculator\n");
    printf("1,addition(+)\n");
    printf("2.subtraction(-)\n");
    printf("3.multiplication(*)\n");
    printf("4.division(/)\n");
    printf("enter your choice(1-4):");
    scanf("%d", &choice);
    printf("enter two number: ");
    scanf("%f %f",&num1, &num2);
    switch(choice){
        case1:
        result= num1 + num2;
        printf(" result = %.2f",
 result);
        break;
        case2:
        result= num1 - num2;
        printf(" result = %.2f",
result);
        break;
       case3:
        result= num1 * num2;
        printf(" result = %.2f",
 result);
        break;
       case4:
        if(num2 != 0)
        printf("result = %.2f", num1 / num2);
 else
 printf("error! division by zero is not allowed.");
    break;
    default:
    printf("invaild choice!");
    }
    return 0;
}
