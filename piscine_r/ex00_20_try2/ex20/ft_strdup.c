#include <stdlib.h>

// delete before submission
#include <string.h>
#include <stdio.h>

char    *ft_strdup(char *source)
{
    char    *copy;
    int     length;
    int     i;

    //strlen
    while (source[length])
    {
        length++;
    }

    // space of source length + 1 ==> allocated to copy pointer
    // length + 1 ==> length of the original string + null termination
    copy = (char *)malloc(sizeof(char) * (length + 1));

    // what is the difference between that and :
    // copy = malloc(sizeof(source) * (length + 1));
    // or
    // malloc(sizeof(length + 1));

    // if there is a problem in space allocation , return NULL
    if (copy == NULL)
    {
            return (NULL);
    }


    //strcpy
    while (i < length)
    {
        copy[i] = source[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

// delete before submission
int main (void)
{
    char *source = "string";
    printf("%s\n", ft_strdup(source));
    printf("%s\n", strdup(source));
}