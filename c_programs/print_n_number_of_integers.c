#include <stdio.h>
int main(){

    int n;
    printf("enter the amount of numbers you want to print\n");
    scanf("%d", &n);
    
    int i=0;
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
}