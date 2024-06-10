#include <stdio.h>

// Function to find the maximum value in an array
int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum value in an array
int findMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to find the sum of an array
int findSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find the average of an array
double findAverage(int arr[], int n) {
    int sum = findSum(arr, n);
    return (double)sum / n;
}

int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Max: %d\n", findMax(arr, n));
    printf("Min: %d\n", findMin(arr, n));
    printf("Sum: %d\n", findSum(arr, n));
    printf("Average: %.2f\n", findAverage(arr, n));

    return 0;
}