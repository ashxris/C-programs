#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("The age address is %d\n", age);
    printf("The age address is %d\n", _age);
    
    return 0;
}