#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[20];
    int fee;
    char course[10];
}s1,s2,s3;
int main()
{
    s1.roll=10;
    strcpy(s1.name,"Rahul");
    s1.fee=1200;
    strcpy(s1.course,"MCA");

    struct student s2={100,"Anku",1300,"MCA"};
    //struct student s1,s2,s3; upar agar nahi liye to yahan pe kar sakte hain
    /*printf("Enter record of student 1:\n");
    scanf("%d %s %d %s",&s1.roll,&s1.name,&s1.fee,&s1.course);

    printf("Enter record of student 2:\n");
    scanf("%d %s %d %s",&s2.roll,&s2.name,&s2.fee,&s2.course);*/

    printf("Enter record of student 3:\n");
    scanf("%d %s %d %s",&s3.roll,&s3.name,&s3.fee,&s3.course);

    printf("\nRoll\tName\tFee\tCourse");
    printf("\n%d\t%s\t%d\t%s",s1.roll,s1.name,s1.fee,s1.course);
    printf("\n%d\t%s\t%d\t%s",s2.roll,s2.name,s2.fee,s2.course);
    printf("\n%d\t%s\t%d\t%s",s3.roll,s3.name,s3.fee,s3.course);
return 0;
}