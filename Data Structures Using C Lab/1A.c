// Implement a List using Array and develop functions to perform insertion operation
#include<stdio.h>
void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertion(int arr[], int n, int element, int capacity, int index) {
    if(n>=capacity) {
        printf("Array is full. Cannot insert.\n");
    }
    for(int i=n-1; i>=index; i--) {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}
int main() {
    int arr[1000], n, element, index, capacity=1000;
    printf("Enter the size of array :\n");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array is : \n");
    display(arr, n);
    printf("Enter the index where you want to insert an element : ");
    scanf("%d", &index);
    printf("Enter the element to insert :\n");
    scanf("%d", &element);
    printf("The resultant array is :\n");
    insertion(arr, n, element, capacity, index);
    n+=1;
    display(arr, n);
    return 0;
}