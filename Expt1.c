

//1.Take input 2d array : marks in 5 subjects calculate total of every student and average of every subject

#include <stdio.h>

#define MAX_STUDENTS 50
#define MAX_SUBJECTS 10

int main() {
    int students, subjects, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    if (students > MAX_STUDENTS || subjects > MAX_SUBJECTS) {
        printf("Error: Maximum students or subjects exceeded.\n");
        return 1;
    }

    int marks[MAX_STUDENTS][MAX_SUBJECTS];

    // Input marks for each student
    for (i = 0; i < students; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (j = 0; j < subjects; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate total marks for each student
    int student_totals[MAX_STUDENTS];
    for (i = 0; i < students; i++) {
        int total = 0;
        for (j = 0; j < subjects; j++) {
            total += marks[i][j];
        }
        student_totals[i] = total;
    }

    // Calculate average for each subject
    float subject_averages[MAX_SUBJECTS] = {0};  // Initialize averages array
    for (j = 0; j < subjects; j++) {
        for (i = 0; i < students; i++) {
            subject_averages[j] += marks[i][j];
        }
        subject_averages[j] /= students;  // Calculate average for each subject
    }

    // Print student marks and totals
    printf("\nStudent Marks and Totals:\n");
    for (i = 0; i < students; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < subjects; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("Total: %d\n", student_totals[i]);
    }

    // Print subject averages
    printf("\nSubject Averages:\n");
    for (j = 0; j < subjects; j++) {
        printf("Subject %d: %.2f\n", j + 1, subject_averages[j]);
    }

    return 0;
}
