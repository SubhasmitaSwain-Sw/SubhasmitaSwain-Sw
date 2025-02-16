#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1 = {"John", 101, 85.5};
    FILE *fptr;

    fptr = fopen("student.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fwrite(&s1, sizeof(struct Student), 1, fptr);
    fclose(fptr);

    struct Student s2;
    fptr = fopen("student.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fread(&s2, sizeof(struct Student), 1, fptr);
    fclose(fptr);

    printf("Read from file: Name: %s, Roll Number: %d, Marks: %.2f\n", s2.name, s2.roll_no, s2.marks);

    return 0;
}

