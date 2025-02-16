#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    int marks[1];  
};

int main() {
    struct Student *s1;
    int n;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    s1 = (struct Student *)malloc(sizeof(struct Student) + n * sizeof(int));

    printf("Enter name: ");
    scanf("%s", s1->name);
    printf("Enter age: ");
    scanf("%d", &s1->age);

    for (int i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &s1->marks[i]);
    }

    printf("Name: %s, Age: %d\n", s1->name, s1->age);
    for (int i = 0; i < n; i++) {
        printf("Marks for subject %d: %d\n", i + 1, s1->marks[i]);
    }

    free(s1);

    return 0;
}

