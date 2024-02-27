// Implement a List using Array and develop functions to perform linear search operations
#include<stdio.h>
#include<stdbool.h>
bool linearSearch(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(key==arr[i]) {
            return i;
        } 
    }
    printf("Not found\n"); 
}
int main() {
    int n, arr[1000], key;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter %d elements : ", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d", &key);
    if(linearSearch(arr, n, key)) {
        printf("Found\n");
    }
    return 0;
}