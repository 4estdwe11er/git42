int ft_iterative_factorial(int nb)
{
    int r;

    r = 1;
    if (nb < 0)
    {
        return (0);
    }
    while (nb > 1)
    {
        r = r * nb;
        nb--;
    }
    return (r);
}
