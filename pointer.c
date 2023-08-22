#include <stdio.h>

int main(){

    int arr[5]={1,2,3,4,5};
    int *p = arr[0];

    printf (" elemtnts of array are: \n");
    for (int i =0; i<5; i++){
        printf ("%d ", *(p+i));
    }
}