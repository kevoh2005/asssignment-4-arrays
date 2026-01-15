#include <stdio.h>
#include <stdbool.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int head = 0;
int count = 0;

void insert_sample(int value) {
    if (count == BUFFER_SIZE) {
        printf("Buffer full. Overwriting the oldest value.\n");

    } else {
        count++;
    }
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;
}

void print_samples() {
    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    int i;
    int tail = (head - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("Stored samples (oldest -> newest): ");
    for (i = 0; i < count; i++) {
        int index = (tail + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main() {
    int value, choice;
    while (1) {
        printf("\n1. Insert new sample\n2. Print all samples\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter sensor value: ");
                scanf("%d", &value);
                insert_sample(value);
                break;
            case 2:
                print_samples();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
