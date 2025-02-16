#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[3];
    struct Student temp;

    for (int i = 0; i < 3; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter student %d roll number: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter student %d marks: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nSorted Student Records by Name:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}

