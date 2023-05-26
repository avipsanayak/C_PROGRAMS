//Q4. Create a structure named student that has name, roll and mark as members. Assume appropriate types and size of member. Write a program using structure to read and display the data entered by the user by passing structure to a function.

#include <stdio.h>
struct Student {
    char name[100];
    int roll, totalMarks;
};

void input( struct Student *s )
{
    printf("Enter name: ");
    scanf("%[^\n]s", s->name);

    printf("Enter roll: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%d", &s->totalMarks);
}

void display( struct Student s)
{
    printf("Student details are: ");
    printf("\n\tName: %s\n\tRoll: %d\n\tTotal marks: %d\n", s.name, s.roll, s.totalMarks);
}

int main()
{
    struct Student s;
    input(&s);
    display(s);
    return 0;
}