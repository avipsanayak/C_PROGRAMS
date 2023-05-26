//Create three database using header linked list
//Student (Roll No, Name, Branch ID, CGPA)
//University (University ID, University Name, University Location, Year of start)
//Branch (Branch ID, University ID, Branch Name)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student 
{
    int roll;
    char name[20];
    int b_id;
    float cgpa;
    struct student *next; 
};
struct head1
{
    int count;
    struct student *s;
}*start1=NULL;

struct university 
{
    int uid;
    char uname[20];
    int b_id;
    char uloc[50];
    int yos[5];
    struct university *next; 
};
struct head2
{
    int count;
    struct university *s;
};



