#include <stdio.h>
#include <string.h>
void Brokenoutput(char str[], char string[])
{
    int i, l,idx=0;
    l = strlen(str);
    for (i = 1; i <= l; i++)
    {
        if (i % 2 == 0)
        {
            string[idx] = str[i-1];
            idx++;
            string[idx] = str[i-1];
            idx++;
            //i++;
            // printf("%s", str[i]);
            // printf("%s", str[i+1]);
        }
        else
        {
            string[idx] = str[i-1];
            idx++;
            // printf("%s", str[i]);
        }
    }
    string[idx]='\0';
}
int main()
{
    char str[100];
    char string[100];
    scanf("%s", &str);

    Brokenoutput(str, string);

    printf("%s", string);
    return 0;
}