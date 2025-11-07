/*
 NAME:Alfred Koome
 ADM:CT101/G/26551/25
 DISCREPTION:CAT2.Q2
 */
#include <stdio.h>
int main() {
    FILE *fptr;
    int numbers[10], i, sum = 0;
    float average;
    fptr = fopen("C:\\Users\\USER\\OneDrive\\Documents\\Ct101-spc2101.file.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        fprintf(fptr, "%d\n", numbers[i]);
    }
    fclose(fptr);
    fptr = fopen("file.txt", "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        fscanf(fptr, "%d", &numbers[i]);
        sum += numbers[i];
    }
    fclose(fptr);

    average = (float)sum / 10;

    printf("\nNumbers read from file:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n\nSum = %d\nAverage = %.2f\n", sum, average);

    return 0;
}
