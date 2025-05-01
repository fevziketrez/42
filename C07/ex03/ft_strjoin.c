int get_len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int total_len(int size, char **strs, char *sep)
{
    int res;

    res = get_len(sep)*(size - 1);
    while (0 <= size - 1)
    {
        res += get_len(strs[size - 1]);
        size--;
    }
    return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dst;
	int	i;

	i = 0;
	len_dst = 0;
	while (dest[len_dst])
		len_dst++;
	while (src[i])
	{
		dest[len_dst + i] = src[i];
		i++;
	}
	dest[len_dst + i] = '\0';
	return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    char *arr;
    
    i = 0;
    arr = malloc(1 + sizeof(char) * total_len(size, strs, sep));
    arr[0] = '\0';
    while (i < size)
    {
        ft_strcat(arr, strs[i]);
        if(i+1 != size)
            ft_strcat(arr, sep);
        i++;
    }
    return (arr);
}