#include <stdio.h>

int main(int argc, char *argv[]) {

    int length;
    printf("Enter the size of array: ");

    scanf("%d", &length);

    int arr[length];

    printf("Enter the elements of the array: ");

    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    float mean = 0;

    for(int i = 0; i < length; i++) {
        mean += arr[i];
    }

    mean = mean / length;

    printf("The mean of the numbers in the array is: %f\n", mean);




}