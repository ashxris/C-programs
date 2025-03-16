#include<stdio.h>

void namaste();
void bonjour();

void main(){
    int nat;
    printf("Enter:\n1 - If you are Indian.\n2 - If are French.");
    printf("\n");
    scanf("%d", &nat);

    if (nat==1){
     namaste();
    }
    else {
     bonjour();
    }

}

void namaste(){
    printf("Namaste!");
}

void bonjour(){
    printf("Bonjour!");
}