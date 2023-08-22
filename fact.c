#include <stdio.h>
#include <math.h>

int fact(int n){
    if (n==0)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}

int main(){
int n;

printf ("enter a number:");
scanf ("%d",&n);
int facto=fact(n);
printf (" factorial is %d",facto);
return 0;
}