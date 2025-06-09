/*
 * Program: Class Data Processor
 * Author: Dewith
 * Date: 2025-06-09
 * Description: A program that stores and outputs some information regarding 
 * the students of a class and their test scores for the semester.
 */


#include <stdio.h>
#include <stdlib.h>

// structure declarations
typedef struct {
    char name[255];
    int age;
    float *test_scores;
    float overall_average;
} Student;


typedef struct {
    Student *students;
    int nofstudents;
    int noftests;
    float scores_average;
} Class;


// function prototypes
float calculate_student_average(Student*, int);
float calculate_class_average(Class*);
void print_report(Class*);


int main() {
    int nofstudents;
    int noftests;

    // ask for the number of students in the class
    printf("Enter the number of students in the class: ");
    scanf("%d", &nofstudents);

    // ask for the number of tests in the semester
    printf("Enter the number of tests taken so far: ");
    scanf("%d", &noftests);
    printf("\n");

    // dynamically allocate memory for the class
    Class class;
    class.nofstudents = nofstudents;
    class.noftests = noftests;
    class.students = (Student *) malloc(nofstudents * sizeof(Student));
    if (class.students == NULL) {
        printf("Memory allocation for students failed\n");
        return 1;
    }

    // dynamically allocate memory for the students
    for (int i = 0; i < nofstudents; i++) {
        class.students[i].test_scores = (
            (float *) malloc(noftests * sizeof(float))
        );
        if (class.students[i].test_scores == NULL) {
            printf("Memory allocation for test scores failed\n");
            return 1;
        }
    }

    // ask for the student's name, age, and test scores
    for (int i = 0; i < nofstudents; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", class.students[i].name);

        printf("Enter the age of %s: ", class.students[i].name);
        scanf("%d", &class.students[i].age);

        printf("Enter the scores of %s:\n", class.students[i].name);
        for (int j = 0; j < noftests; j++) {
            printf("\tEnter the score of test %d: ", j + 1);
            scanf("%f", &class.students[i].test_scores[j]);
        }

        class.students[i].overall_average = (
            calculate_student_average(&class.students[i], noftests)
        );
        printf("\n");
    }

    // calculate the class average
    class.scores_average = calculate_class_average(&class);

    // print the report
    print_report(&class);

    // free the allocated memory
    for (int i = 0; i < nofstudents; i++) {
        free(class.students[i].test_scores);
    }
    free(class.students);

    return 0;
}


float calculate_student_average(Student *student, int noftests) {
    float sum = 0.0;
    for (int i = 0; i < noftests; i++) sum += student->test_scores[i];
    return sum / (float) noftests;
}


float calculate_class_average(Class *class) {
    float sum = 0.0;
    for (int i = 0; i  < class->nofstudents; i++) {
        sum += class->students[i].overall_average;
    }
    return sum / (float) class->nofstudents;
}


void print_report(Class *class) {
    printf("--------------------------------\n");
    printf("Report\n");
    printf("--------------------------------\n");

    printf("| Class average: %.2f\n", class->scores_average);
    printf("|\n");

    for (int i = 0; i < class->nofstudents; i++) {
        printf(
            "| %d) %s - %d years old\n",
            i + 1,
            class->students[i].name,
            class->students[i].age
        );
        printf(
            "| Overall average: %.2f (%.2f from class average)\n", 
            class->students[i].overall_average,
            class->students[i].overall_average - class->scores_average
        );
        printf("|\n");
    }
}
