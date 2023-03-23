#include <stdio.h>


int main(int argc, char *argv[]) {

    int n;
    printf("Please input a Number: ");

    scanf("%d",&n);

    if(n > 0) {
        printf("%d is a positive number\n", n);
    } else if(n < 0) {
        printf("%d is a negative number\n", n);
    } else {
        printf("%d neither positive nor negative\n", n);
    }



}