/*Question 4: Write a program as explained below.
    Create a program which stores the following details about the students in a class.
    Get the number of students in the class first then get each student details as given below:
        (i)Name (Read using scanf)
        (ii)Subject1 marks (Read using scanf)
        (iii)Subject2 marks (Read using scanf)
        (iv)Subject3 marks (Read using scanf)
        (v)Total (Sum of marks of subject 1, 2 and 3)
        (vi)Average (Average of marks)
    You have to define a structure to store those fields.
    Note that name and marks you have to enter.
    Total and average you will have to calculate.
    Have an option to print the individual structures.
    Use functions to make code modular.
    Do not write entire code in main() function.
    Try to make number of subjects flexible.*/
#include <stdio.h>

struct std_mark
{
    char name[100];
    char sub1[50];
    char sub2[50];
    char sub3[50];
    int marks[3];
};

int average(struct std_mark *student, int size);
int sub_marks(struct std_mark *student, int size);

int main()
{
    int size = 2;
    struct std_mark student[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the name: ");
        scanf("%s", student[i].name);

        printf("Enter the Sub1, marks: ");
        scanf("%s %d", student[i].sub1, &student[i].marks[0]);

        printf("Enter the Sub2, marks: ");
        scanf("%s %d", student[i].sub2, &student[i].marks[1]);

        printf("Enter the Sub3, marks: ");
        scanf("%s %d", student[i].sub3, &student[i].marks[2]);

        sub_marks(student, size);
        average(student, size);
        printf("\n");
    }
    return 0;
}

int sub_marks(struct std_mark *student, int size)
{
    for (int i = 0; i < 1; i++)
    {
        printf("Student name = %s\n", student[i].name);
        printf("Sub1 = %s Marks = %d\n", student[i].sub1, student[i].marks[0]);
        printf("Sub2 = %s Marks = %d\n", student[i].sub2, student[i].marks[1]);
        printf("Sub3 = %s Marks = %d\n", student[i].sub3, student[i].marks[2]);
    }
}

int average(struct std_mark *student, int size)
{
    int sum = 0;
    float avg = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += student[i].marks[j];
        }
    }

    avg = (float)sum /  3;
    printf("Total marks = %d\n", sum);
    printf("Average of Sub marks: %f\n", avg);
    
}




