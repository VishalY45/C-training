//Write a program in C to count the number of inversion in a given array
//Expected Output :
//The given array is : 1 9 6 4 5
//The inversions are: (9, 6) (9, 4) (9, 5) (6, 4) (6, 5)
//The number of inversion can be formed from the array is: 5

#include <stdio.h>
int main() {
   	int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter Elements in Array");
    for (int i = 0; i < size; i++) {
        scanf("%d ",&a[i]);
    }
     int inversions = 0;
    printf("The given array is: ");
    for (int i = 0; i < size; i++) {
        printf("\n%d ", a[i]);
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                printf("\nInversion: (%d, %d)\n", a[i], a[j]);
                inversions++;
            }
        }
    }
   printf("The number of inversions in the array is: %d\n", inversions);
}