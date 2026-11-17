#include <stdio.h>
#include <string.h>

int main()

{
    char string[20];
    printf("\nEnter String :-> ");
    scanf("%s", string);

    int length = strlen(string);

    int min, temp;

    for (int i = 0; i < length; i++)
    {
        min = string[i];

        for (int j = i; j < length; j++)
        {
            if (string[j] < min)
            {
                min = string[j];
                temp = string[j];
                string[j] = string[i];
                string[i] = temp;
            }
        }
    }

    printf("\nSORTED String :-> %s", string);
    return 0;
}