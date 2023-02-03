#include <stdio.h>
#include <string.h>

void sort_string_descending(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] < str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    char str[100];
    scanf("%s",&str);
    sort_string_descending(str);
    printf("%s\n", str);
    return 0;
}
