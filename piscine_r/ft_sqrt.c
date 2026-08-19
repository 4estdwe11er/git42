int ft_sqrt(int nb)
{
    int i;

    i = 1;
    if (nb <= 0)
    {
        return (0);
    }
    if ((i * i) < nb)
    {
        i++;
    }
    if ((i * i) == nb)
    {
        return (i);
    }
    else
    {
        return (0);    
    }
}
