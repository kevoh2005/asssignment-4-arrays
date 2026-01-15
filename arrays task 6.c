#include <stdio.h>

int main() {
    int size, i, value, position;

    int array[100];

    printf("Input the size of array: ");
    scanf("%d", &size);

    printf("Input %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &position);


    for (i = size; i >= position - 1; i--) {
        array[i] = array[i - 1];
    }


    array[position - 1] = value;
    size++;

    printf("After Insert the element the new list is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
