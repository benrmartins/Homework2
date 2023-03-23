#include <stdio.h>

int main(int argc, char *argv[]) {

    int length;
    printf("Enter the size of array: ");

    scanf("%d",&length);

    int arr[length];

    printf("Enter the elements of the array: ");

    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; i < length - j - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < length; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;




}