#include <stdio.h>
#include <conio.h>

char name[20];
void newdata()
{
    printf("Enter new student name : ");
    scanf("%c \n", &name);
    printf("Data add Successfully. \n");
    printf("For view data press 2");
}

void StoredData()
{
    printf("Name : %c ", name);
}

void UI()
{
    printf("Welcome - Student Mangement System\n");
    printf("1. Add student\n");
    printf("Press 1\n");
    printf("2. View student\n");
    printf("Press 2\n");
    printf("3. Update student\n");
    printf("Press 3\n");
    printf("4. Exit\n");
    printf("Press 4\n");
}

int main()
{

    // For UI
    UI();

    // For user input
    int choice;

    printf("Enter what you want : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        newdata();
        break;
    case 2:
        printf("List is empty");
        break;
    case 3:
        printf("Edit student information");
        break;
    case 4:
        printf("Program exit\n");
        printf("More information coming soon ...");
        break;
    default:
        break;
    }
    return 0;
}