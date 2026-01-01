#include<stdio.h>

int main() {
    int a,b;
    char op;
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("Enter the number b:");
    scanf("%d",&b);
    printf("Enter the operator:");
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("Error!");
        }else{
        printf("%d",a/b);}
        break;
        case '%':
         if(b==0){
            printf("Error!");
        }else{
        printf("%d",a%b);}
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}
