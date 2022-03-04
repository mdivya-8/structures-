1.#include <stdio.h>
struct emp{
    int empno;
    char empname;
    float empsal;
};
void main(){
    struct emp x={100,'s',2.5};
    printf("%d %c %f\n",x.empno,x.empname,x.empsal);
    printf("%d\n",sizeof(x));// sizeof variable of strcture
    printf("%d",sizeof(struct emp));//sizeof data type of the structure
}
2.#include <stdio.h>
#include <stdlib.h>
struct emp
{
  int eno;
  char ename[30];
  float esal;
};
 int main()
  {
  struct emp *ptr;
  int records,i;
  printf("Enter the number of records: ");
  scanf("%d", &records);
  // Memory allocation for noOfRecords structures
  ptr = (struct emp *)malloc(records * sizeof(struct emp));
  for (i = 0; i < records; i++)
   {
   	printf("Enter employee details:\n");
    scanf("%d %s %f", &(ptr+i)->eno,(ptr+i)->ename,&(ptr+i)->esal);
  }
  printf("Displaying Employee details:\n");
  for (i = 0; i < records; i++)
   {
    printf("%d\t%s\t%f\n", (ptr+i)->eno,(ptr+i)->ename,(ptr+i)->esal);
  }
  free(ptr);

  return 0;
}
3.#include <stdio.h>
struct ref{
    int i;
    char c;
    struct ref* ptr;
};
int main()
{
    struct ref var1;
    struct ref var2;
    var1.i=100;
    var1.c='B';
    var1.ptr=NULL;
    var2.i=200;
    var2.c='C';
    var2.ptr=NULL;
    var1.ptr=&var2;
    printf("%d %c\n",var1.ptr->i,var1.ptr->c);
    printf("%u %u",var1.ptr,var2.ptr);
}
4.#include<stdio.h>
//#define MAX 3
struct student
{
int roll;
char name[20];
float marks;
};
void main()
{
struct student stu[3];
int i;
for(i=0;i<3;i++)
{
printf("enter roll.no:");
scanf("%d",&stu[i].roll);
printf("enter name:");
scanf("%s",stu[i].name);
printf("enter marks:");
scanf("%f",&stu[i].marks);
}
for(i=0;i<3;i++)
{
printf("\n student roll no:%d",stu[i].roll);
printf("\n student name:%s",stu[i].name);
printf("\n student marks:%f\n",stu[i].marks);
}
printf("size of stu:%ld",sizeof(stu));
}
5.#include<stdio.h>
int main()
{
struct student // student structure
{
int rollno;
char name[10];// structure members
float points;
};
struct student std[3];//student structure variable
struct student *ptr=NULL; // student structure pointer variable
int i; //  for loop
ptr=std; //assign std to ptr
for(i=0;i<3;i++)
{
printf("enter rollno:");
scanf("%d",&ptr->rollno);
printf("enter name:");
scanf("%s",ptr->name);
printf("enter points:");
scanf("%f",&ptr->points);
ptr++; // update ptr to point at next element
}
ptr=std;
for(i=0;i<3;i++)
{
// display result via ptr variable
printf("\nrollno:%d\n",ptr->rollno);
printf("name:%s\n",ptr->name);
printf("points :%f\n",ptr->points);
//display variable via std variable
printf("\nrollno:%d\n",std[i].rollno);
printf("name:%s\n",std[i].name);
printf(" points :%f\n",std[i].points);
 ptr++; // update ptr to point next element
}
return 0;
}
6.#include<stdio.h>
struct abc
{
	int *a; //4 bytes
	int b; // 4 bytes
	char c; // 4 byte	
};
void main()
{
	
    struct abc var[2];
	printf("%p %p \n",&var[0].a,&var[1].a);
	struct abc a;
	printf("Size of structure: %d\n",sizeof(a));
	int *ptr;
	char *ptr1;
	float *ptr2;
	double *ptr3;
	printf("Size of integer pointer : %d\n",sizeof(ptr));
	printf("Size of integer pointer : %d\n",sizeof(ptr1));
	printf("Size of integer pointer : %d\n",sizeof(ptr2));
	printf("Size of integer pointer : %d\n",sizeof(ptr3));
	printf("\n");
	printf("Size of integer pointer : %d\n",sizeof(*ptr));
	printf("Size of integer pointer : %d\n",sizeof(*ptr1));
	printf("Size of integer pointer : %d\n",sizeof(*ptr2));
	printf("Size of integer pointer : %d\n",sizeof(*ptr3));
	struct abc var1;
	printf("%p %p %p",&var1.a,&var1.b,&var1.c);
}
7.#include<stdio.h>
#pragma pack(1)
struct abc
{
	char a; // 1 byte
	int b; // 4 bytes
};
void main()
{
	struct abc a;
	printf("Size of structure : %d",sizeof(a));
}
8.#include<stdio.h>
struct abc
{
	int *d;
	char a;
	int b;
}_attribute_((packed));
void main()
{
	struct abc a;
	printf("Size of structure : %d",sizeof(a));
}
