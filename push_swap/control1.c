#include "push_swap.h"

int control1(char **av, build *arg)
{
    int i = 0;
    if (charactercontrol(av, arg))
    {
        write(1, "Please enter only numbers.\n", 27);
    }
    printf("%d \n", arg->allchar);
    printf("%s", arg->allnumberp);
    //babalama(av, arg);
    //char_to_int(av, arg);
    return (0);
}

int charactercontrol(char **av, build *arg)
{
    int i;
    int j;

    i = 1;
    while(av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if ((av[i][j] >= 'a' && av[i][j] <= 'z') || (av[i][j] >= 'A' && av[i][j] <= 'Z'))
                return (1);
            j++;
            if(av[i][j] >= '0' && av[i][j] <= '9')
                arg->allchar++;
        }
        i++;
    }
    arg->allchar++;
    return(0);
}
void    babalama(char **av, build *arg)
{
    int i;
    int j;
    int realjoker;

    i = 1;
    realjoker = 0;
    arg->allnumberp = malloc(sizeof(char *) * (arg->allchar + 1));
    while(av[i])
    {
        j = 0;
        while (av[i][j])
        {
            arg->allnumberp[realjoker] = av[i][j];
            j++;
            realjoker++;
            printf("%c", arg->allnumberp[realjoker]);
        }
        i++;
    }
}
/*int char_to_int(char **av, build *arg)
{
    printf("%s", sefa[1]);
    return (1);
}*/
