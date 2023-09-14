#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));
        int *result = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Initialize the result array with -1.
        for (int i = 0; i < n; i++) {
            result[i] = -1;
        }

        int *stack = (int *)malloc(n * sizeof(int));
        int top = -1;  // Initialize the stack top.

        for (int i = 0; i < n; i++) {
            // Keep popping elements from the stack until a smaller element is found or the stack is empty.
            while (top >= 0 && arr[i] < arr[stack[top]]) {
                result[stack[top]] = arr[i];
                top--;
            }

            // Push the current element's index onto the stack.
            stack[++top] = i;
        }

        // Print the result.
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        // Free allocated memory.
        free(arr);
        free(result);
        free(stack);
    }

    return 0;
}
