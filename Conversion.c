#include <stdio.h>

int main ()
{
    char input ;
    float kmstomiles = 0.621371 ;
    float KgstoPounds = 2.20462 ;
    float CmstoInches = 0.393701 ;
    float InchestoMeter = 0.0254 ;
    float first , second ;

    while (1)
    {
        printf("Enter the Input Character\n 0. to Quit program\n 1. For Kms to Miles\n 2. For Kgs to Pounds\n 3. For Cms to Inches\n 4. For Inches to Meter\n\n ");
        scanf(" %c" , &input );

        switch (input)
        {
            case 'Q':
            printf("You Quit the Program....\n");
            goto end ;
            break;

            case '1':
            printf("Enter the quantity in terms of First Unit :");
            scanf("%f" , &first);
            second = first * kmstomiles ; 
            printf("%f Kms is equal to %.3f Miles \n\n", first , second );
            break;

            case '2':
            printf("Enter the quantity in terms of First Unit :");
            scanf("%f" , &first);
            second = first * KgstoPounds ; 
            printf("%f Kgs is equal to %.3f Pounds \n\n", first , second );
            break;

            case '3':
            printf("Enter the quantity in terms of First Unit :");
            scanf("%f" , &first);
            second = first * CmstoInches ; 
            printf("%f Cms is equal to %.3f Inches \n\n", first , second );
            break;

            case '4':
            printf("Enter the quantity in terms of First Unit :");
            scanf("%f" , &first);
            second = first * InchestoMeter ; 
            printf("%f Inches is equal to %.3f Meter \n\n", first , second );
            break;
        
            default:
            break;
        }
    }
        end:
        printf("Program Executed !!....\n");
    
        return 0;
}
