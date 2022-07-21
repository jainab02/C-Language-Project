/*
Quiz generating random nos and performing operations like
Addition
Substraction
Multiplication and 
Division
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n1, n2, add, mul, sub;
    float div;
    int t;
    int count = 0;

    printf("Enter the amount of time you want to play this game : \n");
    scanf("%d", &t);

    srand(time(0));

    printf("------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < 4 && i < t; i++)
    {

        n1 = rand() % 100 + 1;
        n2 = rand() % 100 + 1;
        printf("the n1 is %d\n", n1);
        printf("the n2 is %d\n", n2);

        int ad, su, mu;
        float dv;
        add = n1 + n2;
        sub = n1 - n2;
        mul = n1 * n2;
        div = (float)n1 / n2;

        printf("addition of above two nos is :\n %d + %d = ", n1, n2);
        scanf("%d", &ad);
        if (ad == add)
        {
            printf("your ans is correct\n");
            count++;
        }
        else
        {
            printf("your ans is wrong\n");
        }

        printf("substraction of above two nos is :\n %d - %d = ", n1, n2);
        scanf("%d", &su);
        if (su == sub)
        {
            printf("your ans is correct\n");
            count++;
        }
        else
        {
            printf("your ans is wrong\n");
        }

        printf("multiplication of above two nos is :\n %d * %d = ", n1, n2);
        scanf("%d", &mu);
        if (mu == mul)
        {
            printf("your ans is correct\n");
            count++;
        }
        else
        {
            printf("your ans is wrong\n");
        }

        printf("division of above two nos is :\n %d / %d = ", n1, n2);
        scanf("%f", &dv);
        if (dv == div)
        {
            printf("your ans is correct\n");
            count++;
        }
        else
        {
            printf("your ans is wrong\n");
        }

        printf("------------------------------------------------------------------------------------------------------------------\n");
    }

    printf("your score is : %d\n", count);
    printf("---------------------------------------------------------------------------------------------------------------------\n");
}