#include <stdio.h>
#include<string.h>

int main()
{
    char input_string[100];
    char freq[26]={0};
    int l,x;
    

    printf("Enter a string: ");
    fgets(input_string, 100, stdin);
    l=strlen(input_string);

    for (int i = 0; i < l; i++)
    {
        freq[input_string[i] - 'a']++;
        printf("%d",x=freq[input_string[i]-'a']);
    }

    printf("You entered: %s", input_string);

    return 0;
}
