//Vo Tue Nam - CE140557

#include <stdio.h>
#include <string.h>
int add2Matrix();
int vietnameseFullName();

/*
    Menu:
    1. Addition 2 Matrices
    2. vietnamese FullName
    3. Exit

    Invalid Input -> Try again

    Method: Swtich Case
*/
int main()
{
    do
    {
        int c;
        printf("\n\nMenu ");
        printf("\n1. Addition 2 Matrices");
        printf("\n2. vietnamese FullName");
        printf("\n3. Exit");
        printf("\n===> Your choose: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            add2Matrix();
            break;
        case 2:
            vietnameseFullName();
            break;
        case 3:
            printf("\n==== EXIT =====");
            return 0;
        default:
            printf("\nInput Invalid");
            break;
        }

    } while (1);
}

/*
    Calculate sum of 2 maxtrices
*/
int add2Matrix()
{
    int a, b, i, j;
    printf("Enter size of maxtrices A and B: ");
    scanf("%d %d", &a, &b);

    int matriceA[a][b], matriceB[a][b], result[a][b];

    //Enter first maxtrice
    printf("\nEnter maxtrices A\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &matriceA[i][j]);
        }
    }

    //Enter 2nd maxtrice
    printf("\nEnter maxtrices B\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &matriceB[i][j]);
        }
    }

    //Find sum of them
    printf("\nResult: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            result[i][j] = matriceA[i][j] + matriceB[i][j];
            //Find and print result
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
    Viet nam Full Name

    First Name - Middle Name - Last Name
    if witout Middle name: dont print it
*/
int vietnameseFullName()
{
    char name[100], firstName[100], middleName[100], lastName[100];
    int i, k, f, m, j = 1;

    //Enter Input
    printf("\nInput: ");
    getchar();
    scanf("%[^\n]%*c", name);
    printf("\n");

    //Count word in this Input
    for (i = 0; name[i] != '\0'; i++)
    {
        if ((name[i] == ' ') && (name[i + 1] != ' ') && (name[i + 1] != '\0'))
        {
            j++;
        }
    }

    //If input invald -> Return 0
    if (name[0] == ' ')
    {
        printf("\nPlease dont Enter Space first!!!\n");
        return 0;
    }
    //If input invald -> Return 0
    if (j < 2 || j > 3)
    {
        printf("\nInvald Input");
        return 0;
    }
    else
    {
        //Print char between 2 spaces
        printf("\nFirst name: ");
        for (i = 0; name[i] != '\0'; i++)
        {
            if (name[i] == ' ')
            {
                break;
            }
            printf("%c", name[i]);
        } 
        //If 3 words -> print Middle name
        if (j == 3)
        {   
            //Print char between 2 spaces
            printf("\nMiddle name: ");
            for (m = i + 1; name[m] != '\0'; m++)
            {
                if (name[m] == ' ')
                {
                    break;
                }
                printf("%c", name[m]);
            }
        }

        //If 2 words -> the next word is Last name (not middle name)
        if (j == 2)
        {
            m = i;
        }

        //Print char between 2 spaces
        printf("\nLast name: ");
        for (k = m + 1; name[k] != '\0'; k++)
        {
            if (name[k] == ' ')
            {
                break;
            }
            printf("%c", name[k]);
        }
    }

    return 0;
}