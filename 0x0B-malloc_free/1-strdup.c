#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy of the string
 * @str : pointer
 * Return : 0
 * */

char *_strdup(char *str)
{
    int index, i;
    char *arr;

    if (str == NULL)
        return (NULL);

    while (str[index] != '\0')
    {
        index++;
    }

    arr = malloc(index);

    for (i = 0; i < index; i++)
    {
        arr[i] = str[i];
    }

    if (arr == NULL)
        return (NULL);

    return (arr);
}
