#include<stdio.h>

int main() {
    int n,sum=0;
    printf("Enter the natuarl number:");
    scanf("%d",&n);
    if(n>=1){
        for(int i=1;i<=n;i++){
        sum+=n;}
        printf("Sum:%d",sum);
    }else{
        printf("invalid input");
    }
    
    return 0;
}
