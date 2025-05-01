#include <stdlib.h>

int *ft_ultimate_range(int **range, int min, int max)
{
    int i;

    i = 0;
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    *range = malloc((max-min)*sizeof(int));
    while (min + i< max)
    {
        arr[i] = min+i;
        i++;
    }
    return max - min;
}