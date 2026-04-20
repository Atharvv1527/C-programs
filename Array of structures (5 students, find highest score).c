#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nTopper:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n",
           s[maxIndex].name, s[maxIndex].roll, s[maxIndex].marks);

    return 0;
}
