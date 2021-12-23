#include <stdio.h>
#include <string.h>
int trims();

//Đếm uppercase - lowercase - number
int coutChar()
{
    char c[100] = "0123456789abcERT#";
    int i, k = 0, low = 0, up = 0, digi = 0;
    // getchar();
    // gets(c);

    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            low++;
        }
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            up++;
        }
        if (c[i] >= '0' && c[i] <= '9')
        {
            digi++;
        }
    }
    printf("\n%d %d %d", low, up, digi);
}

//Đếm nguyên âm
int vowel()
{
    int i, vow = 0, cons = 0;
    char c[100] = "The Result Of 2 Power 5 Is 32!";
    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'u' || c[i] == 'o' || c[i] == 'i' || c[i] == 'A' || c[i] == 'E' || c[i] == 'U' || c[i] == 'I' || c[i] == 'O')
        {
            vow++;
        }
        else if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
        {
            cons++;
        }
    }
    printf("\n%d %d", vow, cons);
}

//Đếm từ trong chuỗi
int coutWord()
{
    int i, cons = 1;
    char c[100] = "The    Result     Of 2    Power 5   Is 32! ";
    for (i = 1; c[i] != '\0'; i++)
    {
        if (c[i - 1] == ' ' && c[i] != ' ' && !(c[i] >= '0' && c[i] <= '9'))
        {
            cons++;
        }
    }
    printf("%d", cons);
}

//upper -> lower và ngược lại
int lowUp()
{
    int i;
    char c[100] = "The Result Of 2 Power 5 Is 32! ";
    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] <= 'z' && c[i] >= 'a')
        {
            c[i] = c[i] - 32;
        }
        else if (c[i] <= 'Z' && c[i] >= 'A')
        {
            c[i] = c[i] + 32;
        }
    }
    printf("%s", c);
}

// char* lTrim(char s[]){
//     int i = 0;
//     while (s[i]==' '){
//         i++;
//     }
//     if(i>0)
//         strcpy(&s[0], &s[i]);
//     return s;
// }

// char* rTrim(char s[]){
//     int i = strlen(s) - 1;
//     while (s[i]==' ')
//     {
//         i--;
//     }
//     s[i + 1] = '\0';
//     return s;
// }

//Xóa hết khoảng trắng dư thừa
int trims()
{
    char c[100] = "   The      Result Of 2  Power 5 Is 32!   ";

    //left Trim
    int i = 0;
    while (c[i] == ' ')
    {
        i++;
    }
    if (i > 0)
        strcpy(&c[0], &c[i]);

    //right Trim
    int j = strlen(c) - 1;
    while (c[j] == ' ')
    {
        j--;
    }
    c[j + 1] = '\0';

    //Middle Trim
    char *ptr = strstr(c, "  "); //Chỗ này 2 khoảng cách nhe
    while (ptr != NULL)
    {
        strcpy(ptr, ptr + 1);
        ptr = strstr(c, "  ");
    }

    printf("%s", c);
}

//Thay thế từ trong chuỗi
char replaceAll(/*char *src, char *sub, char *rep*/)
{
    char src[80] = "Hello em";
    char sub[20] = "Hello";
    char rep[20] = "Yeu";
    puts(src);
    int subL = strlen(sub);
    int repL = strlen(rep);
    char temp[100];
    char *ptr = strstr(src, sub);
    int i;
    while (ptr != NULL) //while sub exits
    {
        strcpy(ptr, ptr + subL); //prepare space for rep
        if (repL > 0)
        {
            strcpy(temp, ptr);
            strcpy(ptr + repL, temp);
            //copy char in rep to src
            for (i = 0; i < repL; i++)
            {
                *(ptr + i) = rep[i];
            }
        }
        ptr = strstr(src, sub);
    }
    puts(src);
}

//remove number digit
int removeDigit()
{
    int i;
    char c[100] = "The Result Of 2 Power 5 Is 32!";
    for (i = 0; c[i] != '\0'; i++)
    {
        if (!(c[i] <= '9' && c[i] >= '0'))
        {
            printf("%c", c[i]);
        }
    }
}

//Reverses all char
int reversesChar()
{
    int i, j;
    char c[100] = "The Result Of 2 Power 5 Is 32!";
    for (i = 0; c[i] != '\0'; i++)
        ;
    printf("%d\n", i);
    for (j = i; j >= 0; j--)
    {
        printf("%c", c[j]);
    }
}

// Function to reverse any sequence
// starting with pointer begin and
// ending with pointer end
void reverse(char *begin, char *end)
{
    char temp;
    while (begin < end)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

// Function to reverse words*/
void reverseWords()
{
    char s[100] = "The Result Of 2 Power 5 Is 32!";
    char *word_begin = s;

    // Word boundary
    char *temp = s;

    // Reversing individual words as
    // explained in the first step
    while (*temp)
    {
        temp++;
        if (*temp == '\0')
        {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ')
        {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }

    // Reverse the entire string
    reverse(s, temp - 1);
    printf("%s", s);
}

//palindrome - viết xuôi hay ngược gì vẫn giống nhau
int palindrome()
{
    char s[100] = "acbabca";
    int i, j, flag = 1;
    for (i = 0; s[i] != '\0'; i++)
        ;
    printf("%d", i);
    for (j = 0; j <= (i / 2) + 1; j++)
    {
        printf("\n%c %c", s[j], s[i - 1]);
        if (s[j] != s[--i])
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("\npalindrome");
    }
    else
    {
        printf("\nNot");
    }
}

// Dong tay nam bac
int giddyBoy()
{
    int i;
    char s[100] = "EESSEESSWWNNNNWWNNS";
    int h = 0, v = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'N')
        {
            h++;
        }
        if (s[i] == 'S')
        {
            h--;
        }
        if (s[i] == 'E')
        {
            v++;
        }
        if (s[i] == 'W')
        {
            v--;
        }
    }
    printf("(%d, %d)", v, h);
}

//Check DNA
int checkDNA()
{
    int count = 0, count1 = 0;
    int i, j, l = 0, l1, l2;
    char s[100] = "ACGTGCACGTGCACGTGCA";
    char c[100] = "GCACG";
    l1 = strlen(s);
    l2 = strlen(c);
    char cp[100];
    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < l2; j++)
        {
            cp[j] = s[i++];
        }
        printf("%s ", cp);
        i -= l2;
        if (strcmp(c, cp) == 0)
        {
            count++;
        }
    }
    printf("\n%d", count);
}

//check parngram
int parngram()
{
    char c[26] = "abcdefghijklmnopqrstuvwxyz";
    //char u[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s[100] = "The quick brown fox jumps over the lazy dog";
    int i, j;
    for (i = 0; i < strlen(s); i++)
    {
        for (j = 0; j < 26; j++)
        {
            if ((s[i] == c[j]) || (s[i] == c[j] - 32))
            {
                c[j] = '0';
            }
        }
    }
    printf("\nmissing: ");
    for (j = 0; j < 26; j++)
    {
        if (c[j] != '0')
        {
            printf("%c", c[j]);
        }
    }
    printf("\npangram");
}

//Swap
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// bubble sort function - đổi dấu > và < là thành sort khác rồi
void bubbleSort(int array[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}
// Function to print the elements of an array
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

// Main Function
int sort()
{
    int array[] = {89, 32, 20, 113, -15};
    int size = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, size);
    printf("Sorted array: \n");
    printArray(array, size);
    return 0;
}

int armstrongNumber()
{
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("armstrong  number ");
    else
        printf("not armstrong number");
    return 0;
}

//uoc chung lon nhat
int gcd(int n1,int n2)
{
    int i, gcd;

    // printf("Enter two integers: ");
    // scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}


//boi chung nho nhat
int lcm(int n1,int n2)
{
    int max;
    // printf("Enter two positive integers: ");
    // scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
int main()
{
    lcm(11, 12);
}