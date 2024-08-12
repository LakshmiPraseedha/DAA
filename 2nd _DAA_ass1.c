#include <stdio.h>

void printArray(int arr[], int n) {
    int i;
	for (i = 0; i < n; i++) {
        printf("%4d\n", arr[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n) {
    int i;
	for (i = 0; i < n; i++) {
		int j;
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int trackingNumbers[100]; // array to store package tracking numbers
    int n; // number of packages

    printf("Enter number of packages: ");
    scanf("%d", &n);

    printf("Enter package tracking numbers:\n");
    int i;
	for (i = 0; i < n; i++) {
        scanf("%d", &trackingNumbers[i]);
    }

    sortArray(trackingNumbers, n);

    printArray(trackingNumbers, n);

    return 0;
}



