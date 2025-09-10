#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // assignment1
    int x = 10;          
    int *ptr = &x;       
    printf("address using &x - %p\n", (void*)&x);
    printf("address using pointer - %p\n", (void*)ptr);
    *ptr = 20;           
    printf("new val - %d\n\n", x);

    // assignment2
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; 
    printf("og array - \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
   
    for (int i = 0; i < 5; i++) {
        *(p + i) += 10; 
    }
    printf("mod array - \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // assignment3
    int a = 5, b = 15;
    printf("before - a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after - a = %d, b = %d\n\n", a, b);

    // assignment4
    int y = 50;
    int *p1 = &y;
    int **p2 = &p1;
    printf("val of y using pointer - %d\n", *p1);
    printf("val of y using double pointer - %d\n\n", **p2);

    // assignment5
    char str[] = "Hello";
    char *sptr = str;
    printf("String printed using pointer:\n");
    while (*sptr != '\0') {
        printf("%c", *sptr);
        sptr++;
    }
    printf("\n");

    sptr = str;
    int count = 0;
    while (*sptr != '\0') {
        count++;
        sptr++;
    }
    printf("num of char - %d\n", count);

    return 0;
}
