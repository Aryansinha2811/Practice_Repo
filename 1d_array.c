#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter the marks of the students:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the Marks of student no. %d in the Elements of Array: ",i);
        scanf("%d", &marks[i] );
    }

    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        printf("The Marks of student no. %d is : %d\n",i,marks[i]);
    }
    
    printf("\n");
    printf("Program Sucessfully Executed !!....\n");

    return 0;
}
