#include<stdio.h>
int main(){

    int age = 20;
    int price = 70;

    int *ageptr = &age;
    int *priceptr = &price;

    printf("%u\n", ageptr-priceptr);
    printf("%u\n", ageptr);
    printf("%u\n", priceptr);

    return 0;
}