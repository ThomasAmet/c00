# include <unistd.h>

void ft_is_negative(int n)
{
    char answer;
    if(i<0)
    {
        answer = 'N';
    }
    else
    {
        answer = 'P';
    }
    write(1, &answer, 1);

    char newline = '\n';
    write(1, &newline, 1);
}