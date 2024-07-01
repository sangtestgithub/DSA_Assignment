//Create array of 10 students(rollno, name, marks) and sort students by their marks. 

#include <stdio.h>
#include <string.h>


typedef struct {
    int rollNo;
    char name[50];
    int marks;
} Student;


void sortStudents(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    //  array of 10 students
    Student students[10] = {
        {1, "akshada", 89},
        {2, "akshu", 94},
        {3, "aksha", 78},
        {4, "shiva", 90},
        {5, "shivani", 82},
        {6, "anki", 88},
        {7, "ankita", 75},
        {8, "aniket", 91},
        {9, "araaaaaaaaj", 80},
        {10, "rrrmk", 86}
    };

    
    sortStudents(students, 10);

    printf("Sorted students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Roll No: %d, Name: %s, Marks: %d\n", students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}