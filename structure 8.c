#include<stdio.h>
struct college_data
{
    char college_name[20];
    char location[20];
};
struct student_data
{
    char student_name[20];
    int standard;
    struct college_data col_data;
};
struct student_data read(struct student_data);
void display(struct student_data);
main()
{
    struct student_data std_data;
    std_data=read(std_data);
    display(std_data);
}
struct student_data read(struct student_data std_data)
{
    printf("enter student name,standard,college name and location \n");
    scanf("%s%d%s%s",std_data.student_name,&std_data.standard,std_data.col_data.college_name,std_data.col_data.location);
    return std_data;
};
void display(struct student_data std_data)
{
    printf("student name is: %s\n standard is: %d\n college name is: %s\n location: %s\n",std_data.student_name,std_data.standard,std_data.col_data.college_name,std_data.col_data.location);
}

