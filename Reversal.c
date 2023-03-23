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

    for(int i = length - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
}
