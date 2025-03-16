#include<stdio.h>

float tempConvert(float celsius);

int main(){
    float celsius;
    printf("Enter the temp in celsius.\n");
    scanf("%f", &celsius);

    float far = tempConvert( celsius);{
    printf("Temp in far is %f degrees", far);
    }
    return 0; 
}

float tempConvert(float celsius){
    float far = celsius * (9.0/5.0) + 32.0;
    return far;
}