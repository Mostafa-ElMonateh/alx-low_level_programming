#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
    int index1, index2, i;
    char *arr;

    if (s1 == NULL || s2 == NULL)
        s1 = s2 = "";

    while (s1[index1] != '\0')
    {
        index1++;
    }

    while (s2[index2] != '\0')
    {
        index2++;
    }

    arr = malloc((index1 + index2 + 1) * sizeof(char));

    while (*s1)
    {
        arr[i] = *s1;
        i++;
        s1++;
    }

    while (*s2)
    {
        arr[i] = *s2;
        i++;
        s2++;
    }
    arr[i] = *s2;

    return (arr);
}
