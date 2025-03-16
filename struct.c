#include <stdio.h>
#include<string.h>

struct Person {
    char name[50];      
    int age;            
    float height;         
    char gender;        
}; 

int main(){

    struct Person person1;
    // person1.name = "Bob";
    person1.age = 25;
    person1.height = 6.0;
    person1.gender = 'M';
    char namee[] = "Ashwin";
    strcpy(person1.name, namee);


    printf("%s\n", person1.name);

return 0;
}