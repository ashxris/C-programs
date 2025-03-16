#include <stdio.h>
#include<string.h>

int main(){

    char dest[] = "Hello ";
    char src[] = "world!";
    printf("%s", strcat(dest, src));

return 0;
}