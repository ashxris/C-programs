# include<stdio.h>

    void printIntegers( int arr[], int n){
        for(int i=0;i<n;i++){
            printf("%d \t", arr[i]);
        }
    }

    int main(){
        int arr[] = {63, 65, 62, 73, 70, 65};
        printIntegers(arr, 6);

        return 0;
    }
