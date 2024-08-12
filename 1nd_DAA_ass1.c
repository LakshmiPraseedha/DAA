#include <stdio.h>

void printArray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%9d\n", arr[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n, int order) {
   int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = i + 1; j < n; j++) {
            if ((order == 1 && arr[i] < arr[j]) || (order == 2 && arr[i] > arr[j])) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int prices[100]; // array to store book prices
    int n; // number of books
    int order; // 1 for descending order, 2 for ascending order
	int i;
    printf("Enter number of books: ");
    scanf("%d", &n);

    printf("Enter book prices:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("Enter 1 for high to low or 2 for low to high: ");
    scanf("%d", &order);

    sortArray(prices, n, order);

    printArray(prices, n);

    return 0;
}


