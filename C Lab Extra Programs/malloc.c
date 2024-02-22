#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr=(int*)malloc(4*sizeof(int));
    if(ptr==NULL) {
        printf("Memory is full.\n");
    } else {
        printf("Enter the 4 elements :\n");
        for(int i=0; i<4; i++) {
            scanf("%d", ptr);
            ptr++;  
        }
    }
    printf("The elements are : \n");
    for(int i=0; i<4; i++) {
        printf("%d\n", ptr);
        ptr++;
    }
    return 0;
}