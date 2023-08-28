#include "push_swap.h"

int main(int ac, char **av)
{
    if (ac <= 1)
    {
        write(1, "Arguman Error", 13);
        exit(1);
    }
    build *arg;

    arg = malloc(sizeof(build));
    control1(av, arg);
}