#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");

    if(fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "Hello, this is file writing in C.\n");
    fclose(fp);

    printf("Data written successfully.\n");
    return 0;
}
