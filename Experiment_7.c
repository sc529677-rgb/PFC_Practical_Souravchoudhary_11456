#include<stdio.h>

int main() {
    int r;
    printf("Enter the radius of circle in cm:");
    scanf("%d",&r);
    float area=3.14159265359*r*r;
    printf("Area of circle is:%f cm",area);
    return 0;
}
