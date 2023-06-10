#include <stdio.h>

int main()
{
    printf("Enter the Seating Arrangement of the students:--\n");
    int seat[2][3];

    printf("\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("Enter the seat[%d][%d] : ", i, j);
            scanf("%d", &seat[i][j]);
        }
        
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("%d " ,seat[i][j]);

            if (j==3)
            {
                printf("\n");
            }
            
        }
        
    }

    printf("Program Executed !!....");

    return 0;
}
