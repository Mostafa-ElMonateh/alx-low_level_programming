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
    if (str == NULL)
        return (NULL);

    int index; //counter

    while (str[index] != '\0')
    {
        index++;
    }

    char *arr;

    arr = malloc(index);

    int i; //counter

    for (i = 0; i < index; i++)
    {
        arr[i] = str[i];
    }

    if (arr == NULL)
        return (NULL);

    return (arr);
}
