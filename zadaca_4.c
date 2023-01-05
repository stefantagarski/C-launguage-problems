


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    // Read the dimensions of the matrix
    int rows, cols;

    scanf("%d %d", &rows,&cols);



    // Load the matrix
    int arr[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    int* farthest = malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++) {

        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        float mean = (float)sum / cols;

        // Find the element farthest from the mean
        float max_distance = -1;
        int farthest_element = 0;
        for (int j = 0; j < cols; j++) {
            float distance = fabs(arr[i][j] - mean);
            if (distance > max_distance) {
                max_distance = distance;
                farthest_element = arr[i][j];
            }
        }

        // Add the farthest element to the array
        farthest[i] = farthest_element;
    }

    // Print the array

    for (int i = 0; i < rows; i++) {
        printf("%d ", farthest[i]);
    }
    printf("\n");

    // Free the array
    free(farthest);

    return 0;
}