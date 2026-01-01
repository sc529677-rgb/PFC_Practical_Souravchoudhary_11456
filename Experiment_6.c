#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enetr the number: a,b\n");
    scanf("%d %d",&a,&b);
    printf("Number before swapping: a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=a;
    printf("Number after swappingm: a=%d,b=%d",a,b);
   
}
