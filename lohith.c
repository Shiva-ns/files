#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct class{
    char name[30];
    int subject1_marks;
    int subject2_marks;
    int subject3_marks;
    int total_marks;
    int average;
};
void input(struct class student[],int num){
    for(int i=0;i<num;i++){
        printf("enter the name of student %d\n",i+1);
        scanf("%s",student[i].name);
        printf("enter the marks of subject 1\n");
        scanf("%d",&student[i].subject1_marks);
        printf("enter the marks of subject 2\n");
        scanf("%d",&student[i].subject2_marks);
        printf("enter the marks of subject 3\n");
        scanf("%d",&student[i].subject3_marks);
        student[i].total_marks=student[i].subject1_marks+student[i].subject2_marks+student[i].subject3_marks;
        student[i].average=student[i].total_marks/3;
    }
}
void display(struct class student[],int num){
    printf("Names \tsub1\tsub2\tsub3\ttotal\tavg\n");
    for(int i=0;i<num;i++){
        printf("%s \t%d\t%d\t%d\t%d\t%d\n",student[i].name,student[i].subject1_marks,student[i].subject2_marks,student[i].subject3_marks,student[i].total_marks,student[i].average);
    }
}
void main(){
    int num;
    printf("enter the number of students in class:\n");
    scanf("%d",&num);
    struct class student[num];
    input(student,num);
    display(student,num);
}