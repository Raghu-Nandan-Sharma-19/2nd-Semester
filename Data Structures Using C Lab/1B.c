// Implement a List using Array and develop functions to perform deletion operation
#include<stdio.h>
void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void deletion(int arr[], int n, int index) {
    for(int i=index; i<n-1; i++) {
        arr[i]=arr[i+1];
    }
}
int main() {
    int arr[1000], n, element, index;
    printf("Enter the size of array :\n");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array before deletion is : \n");
    display(arr, n);
    printf("Enter the index to delete an element : ");
    scanf("%d", &index);
    printf("The array after deletion is :\n");
    deletion(arr, n, index);
    n-=1;
    display(arr, n);
    return 0;
}