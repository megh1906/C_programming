#include <stdio.h>
#include <math.h>

//prime numbers btween 100-500
int main (){
    int i,j;
    int flag;
    printf (" prime numbers between 100-500 \n");
    for (i=100; i<=500; i++){
        flag=1;
        for (j=2; j<i;j++){
            if (i%j==0){
             flag=0;

            }   
         }if (flag==1){
            printf ("%d\n",i);
         }
    }
}

// prime numbers between 1-100
int main (){
    int i,j;
    int flag;
    printf (" prime numbers between 1-100 \n");
    printf ("2\n");
    for (i=3; i<=100; i++){
        flag=1;
        for (j=2; j<i;j++){
            if (i%j==0){
             flag=0;

            }   
         }if (flag==1){
            printf ("%d\n",i);
         }
    }
}