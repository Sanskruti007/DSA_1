#include <stdio.h>

#include <string.h>

struct collegedetails{

char institution[30];
char address[30];


}college;

struct studentdetails{

char name[20];
int class;
int rollno;

struct collegedetails college;

}student, *studentptr;


void main(){

struct studentdetails student;
studentptr=&student;

read(studentptr);
display(studentptr);

printf("\nSize of structure college:%d",sizeof(student));
printf("\nSize of college structure:%d",sizeof(student.college));

}

void read(struct studentdetails*studentptr){
printf("STUDENT DETAILS\n:");

printf("Enter the name:");
scanf("%s",&studentptr->name);

printf("Enter the class:");
scanf("%d",&studentptr->class);

printf("Enter the rollnumber:");
scanf("%d",&studentptr->rollno);

printf("Enter the institution name:");
scanf("%s",&studentptr->college.institution);

printf("Enter the college address:");
scanf("%s",&studentptr->college.address);

}
void display(struct studentdetails*studentptr){
printf("\nName of the student:%s",studentptr->name);
printf("\nClass of the student:%d",studentptr->class);
printf("\nRoll number of the student:%d",studentptr->rollno);
printf("\nInstitution name:%s",studentptr->college.institution);
printf("Adress of the college:%s",studentptr->college.address);


}
