#include "main.h"
/**
 * _strncpy - copy a string
 * @target: input value
 * @src: input value
 * @n: input value
 * Return: target
 */
char *_strncpy(char *target, char *src, int n)
{
        int j;


        j = 0;
        while (j < n && src[j] != '\0')
        {
                target[j] = src[j];
                j++;
        }
        while (j < n)
        {
                target[j] = '\0';
                j++;
        }


        return (target);
}
