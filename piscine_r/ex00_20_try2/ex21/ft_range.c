#include <stdlib.h>

#include <stdio.h>

int     *ft_range(int min, int max)
{
    int *array;
    int range;

    range = max - min;
    array = (int *)malloc(sizeof(int) * (range + 1));

    // if the min is bigger than max -- return null
    if (min >= max)
    {
        array = NULL;
        return (0);
    }

    // while the array is valid (min is smaller than max) -- array recieves the min
    int i;
    i = 0;

    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    return (array);
}



int main(void)
{
    int min = 1;
    int max = 10;
    int i = 0;
    int *array = ft_range(min, max);
    int range = max - min;

    while (i < range)
    {
        printf("%d\n", array[i]);
        i++;
    }
    free(array);
}

//return array of intigers -- between min and max.
//min and max -- excluded.
//if min >= max  -- return null pointer.