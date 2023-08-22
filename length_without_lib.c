// find lenght without std lib
# include <stdio.h>
#include <math.h>
#include <string.h>
int countstring (char arr[]);
int main(){
    char arr[100];
   printf (" enter a string:");
   fgets(arr,100,stdin);
   printf ("length is %d", countstring(arr));
   return 0; 
}

int countstring (char arr[]){
    int count=0;
    for (int i=0; arr[i]!='\0'; i++){
        count ++;
    }return count-1;

}