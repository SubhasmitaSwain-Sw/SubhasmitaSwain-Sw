#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int age;
};

int main() {
    struct Student students[3], temp;

    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &students[i].age);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (students[i].age > students[j].age) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nSorted Student Records by Age:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll Number: %d, Age: %d\n", students[i].name, students[i].roll_no, students[i].age);
    }

    return 0;
}

