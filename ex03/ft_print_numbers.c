# include <unistd.h>

void ft_print_numbers(void)
{
    for(int i=0; i<=9; i++)
    {
        char encoded_int = '0' + i;
        write(1, &encoded_int, 1);
    }
    char newline = '\n';
    write(1, &newline, 1);
}