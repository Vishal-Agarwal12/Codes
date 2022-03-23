#include<stdio.h>

void printUnion(int arr1[], int arr2[], int len1, int len2) {

    int f, i, j, k = 0;
    int arr3[100];

    for (i = 0; i < len1; i++) {
        arr3[k] = arr1[i];
        k++;
    }

    for (i = 0; i < len2; i++) {
        f = 0;
        for (j = 0; j < len1; j++) {
            if (arr2[i] == arr1[j]) {
                f = 1;
            }
        }

        if (f == 0) {
            arr3[k] = arr2[i];
            k++;
        }
    }
    printf("Union of two array is:");
    for (i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }
}


int main() {

    int arr1[20];
    int arr2[20];
    int arr3[40];
    int i, j, len1, len2;

    printf("Enter size of 1st array:");
    scanf("%d", &len1);

    printf("Enter 1st array elements:");
    for (i = 0; i < len1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of 2nd array:");
    scanf("%d", &len2);

    printf("Enter 2nd array elements:");
    for (i = 0; i < len2; i++) {
        scanf("%d", &arr2[i]);
    }

    printUnion(arr1, arr2, len1, len2);
   

    return 0;
}