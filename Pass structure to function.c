#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void display(struct Student s) {
    printf("\nModified Details:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter details:\n");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    s.marks += 5;  // modification

    display(s);
    return 0;
}
