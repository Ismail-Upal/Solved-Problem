#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int id;
    char batch[10];
    float cgpa;
    int current_semester;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

void add_student() {
    if (student_count >= MAX_STUDENTS) {
        printf("Database is full, cannot add more students.\n");
        return;
    }
    Student s;
    printf("Enter student name: ");
    scanf(" %[^\n]%*c", s.name);
    printf("Enter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student batch: ");
    scanf(" %[^\n]%*c", s.batch);
    printf("Enter student CGPA: ");
    scanf("%f", &s.cgpa);
    printf("Enter current semester: ");
    scanf("%d", &s.current_semester);

    students[student_count++] = s;
    printf("Student added successfully.\n");
}

void delete_student() {
    int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            found = 1;
            for (int j = i; j < student_count - 1; j++) {
                students[j] = students[j + 1];
            }
            student_count--;
            printf("Student deleted successfully.\n");
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

void update_student() {
    int id;
    printf("Enter student ID to update: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Enter new student name: ");
            scanf(" %[^\n]%*c", students[i].name);
            printf("Enter new student batch: ");
            scanf(" %[^\n]%*c", students[i].batch);
            printf("Enter new student CGPA: ");
            scanf("%f", &students[i].cgpa);
            printf("Enter new current semester: ");
            scanf("%d", &students[i].current_semester);
            printf("Student updated successfully.\n");
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

void print_students() {
    if (student_count == 0) {
        printf("No students in the database.\n");
        return;
    }

    for (int i = 0; i < student_count; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Batch: %s\n", students[i].batch);
        printf("CGPA: %.2f\n", students[i].cgpa);
        printf("Current Semester: %d\n", students[i].current_semester);
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("Student Database Menu:\n");
        printf("1. Add student\n");
        printf("2. Delete student\n");
        printf("3. Update student\n");
        printf("4. Print all students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                delete_student();
                break;
            case 3:
                update_student();
                break;
            case 4:
                print_students();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}