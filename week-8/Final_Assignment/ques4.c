#include <stdio.h>
#include <string.h>

void swap(char trs[])
{
    int i, j, temp;
    for (i = 0; i < strlen(trs); i++)
    {
        for (j = i + 1; j < strlen(trs) - 1; j++)
        {
            if (trs[i] > trs[j])
            {
                temp = trs[i];
                trs[i] = trs[j];
                trs[j] = temp;
            }
        }
    }
}
int main()
{
    char str[100];
    int i;
    scanf("%s", &str);
    swap(str);

    for (i = 0; i < strlen(str); i++)
    {
        printf("%s ", str[i]);
    }

    return 0;
}