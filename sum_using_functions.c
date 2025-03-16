#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b, s;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    s= sum(a, b);

    printf("The sum is %d", s);
    return 0;

}

int sum(int a , int b){
    return a+b;
}