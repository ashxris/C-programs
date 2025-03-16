#include<stdio.h>
int main(){

    float item[3];

    printf("Enter the price of first item:\n");
    scanf("%f\n", &item[0]);
    printf("Enter the price of second item:\n");
    scanf("%f\n", &item[1]);
    printf("Enter the price of third item:\n");
    scanf("%f\n", &item[2]);

    item[0]=item[0]+(0.18*item[0]);
    item[1]=item[1]+(0.18*item[1]);
    item[2]=item[2]+(0.18*item[2]);

    printf("Final price of item1 = %f, item2 = %f, item3 = %f", item[0], item[1], item[2]);

    return 0;
}