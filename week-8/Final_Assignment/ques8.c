#include <stdio.h>
#include <string.h>
#define MAX_CHARS 26

void sortByswap(char *str)
{
    int n = strlen(str);
    int freq[MAX_CHARS] = {0};

    // Step 1:
    for (int i = 0; i < n; i++)
    {
        freq[str[i] - 'a']++;
    }

    // Step 2:
    int k = 0;
    for (int i = 0; i < MAX_CHARS; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            str[k++] = i + 'a';
        }
    }
}

int main()
{
    char str[100];
    scanf("%s",&str);

    sortByswap(str);
    printf("%s\n", str);

    return 0;
}
