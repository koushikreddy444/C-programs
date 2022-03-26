#include<stdio.h>
int main()
{
struct student
{
 char USN [10];
 char stu name [10];
 int sem;
 float m1,m2,m3,m4,m5,avg;
};
struct student s[10];
int i,n;
printf("enter no of student records");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("student USN:\n");
 printf("%s",s[i].USN);
 printf("student name:\n");
 scanf("%s",s[i]stu.name);
 printf("enter semester:\n");
 scanf("%d",&s[i].sem);
 printf("enter 5 subject marks:\n");
 scanf("%f%f%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
}

for(i=0;i<n;i++)
{ 
 s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0);
}
printf("student scored above avg:\n");
printf("\nUSN\t student name\taverage");

for(i=0;i<n;i++)
{ 
 if(s[i]:avg>50.0)
 {
  printf("\n%s\t%s\t%f\n",s[i].USN,s[i].stuname,s[i].avg);
 }
}
printf("students scored below avg");
printf("\nUSN\tstudent.name\taverage");

for(i=0;i<n;i++)
{
 if(s[i].avg,50.0)
 {
  printf("\n%s\t%s\t%f",s[i].USN,s[i].stu.name,s[i].avg);
 }
}
return 0;
}

