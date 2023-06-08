#include <stdio.h>
int addnum(int a,int b);

int main()
{
    int n1 ,n2 ,sum ;

    printf("Enter the number : ");
    scanf("%d" , &n1);

    printf("Enter the number : ");
    scanf("%d" , &n2);

    sum = addnum(n1,n2);
    printf("The sum is = %d " , sum );

    return 0;
}

int addnum(int a, int b)
{
    int result ;
    result = a+b ;
    return result ;
}
