#include<stdio.h>
#define N 10
typedef struct {
    int a[N];
    int length;
} List;

int insert_a(List* b, int e) {
    int j;
    if (b->length + 1 > N)
        return 0;
    for (j = b->length - 1; j >= 0; j--)
        if (e < b->a[j])
            b->a[j + 1] = b->a[j];
        else
            break;
    b->a[j + 1] = e;
    b->length++;
    return 1;
}

void main() {
    List L;
    int i, x;
    printf("length(1-10)= ");
    scanf_s("%d", &L.length);
    printf("please enter number to list: ");
    for (i = 0; i < L.length; i++)
        scanf_s("%d", &L.a[i]);
    printf("\nNumbers in List:");
    for (i = 0; i < L.length; i++)
        printf("%d ", L.a[i]);
    printf("\n");

    // ²âÊÔ²åÈëº¯Êý
    printf("please enter a number to insert: ");
    scanf_s("%d", &x);
    if (insert_a(&L, x)) {
        printf("Insertion succeeded!\n");
        printf("Numbers in List after insertion:");
        for (i = 0; i < L.length; i++)
            printf("%d ", L.a[i]);
        printf("\n");
    }
    else {
        printf("Insertion failed: List is full.\n");
    }
}