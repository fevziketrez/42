#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int i;

    i = 0;
    if (min >= max)
        return (0);
    arr = malloc((max-min)*sizeof(int));
    while (min + i< max)
    {
        arr[i] = min+i;
        i++;
    }
    return arr;
}