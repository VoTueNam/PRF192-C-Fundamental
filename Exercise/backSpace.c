#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    scanf("%[^\n]*c", &s);
    int l = strlen(s);
    int i;
    for (i = 0; i < l; i++)
    {
        if (s[i] == '<')
        {
            int k = 0;
            do
            {
                k++;
                if (s[i - k] != '<')
                {
                    s[i - k] = '<';
                    break;
                }
            } while (1);
        }
    }
    //printf("\"");
    for (i = 0; i < l; i++)
    {
        if (s[i] != '<')
        {
            printf("%c", s[i]);
        }
    }
    //printf("\"");
}