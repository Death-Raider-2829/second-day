#include <stdio.h>

int main(){
    int sum=0,n,i=1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while(i<=n){
        sum=i+sum;
        i++;
    }
    printf("The sum of the first %d numbers is %d\n", n, sum);
return 0;
}