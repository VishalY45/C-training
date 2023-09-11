#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i, j;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int num1, num2;
    printf("Enter two numbers to find minimum distance: ");
    scanf("%d %d", &num1, &num2);
    
    int minDist = size; // Initialize with a large value
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if ((arr[i] == num1 && arr[j] == num2) || (arr[i] == num2 && arr[j] == num1)) {
                int dist = abs(j - i);
                if (dist < minDist) {
                    minDist = dist;
                }
            }
        }
    }
    
    if (minDist == size) {
        printf("The numbers are not both present in the array.\n");
    } else {
        printf("The minimum distance between %d and %d is %d\n", num1, num2, minDist);
    }
    
    return 0;
}