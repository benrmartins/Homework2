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

    int largest = arr[0];

    for(int i = 0; i < length; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

}
