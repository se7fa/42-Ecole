#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdio.h>
#include "../libft/libft.h"
#include "../ft_printf/ft_printf.h"

typedef struct s_build
{
    int data;
    int allchar;
    char *allnumberp;
}   build;

int control1(char **av, build *arg);
void    babalama(char **av, build *arg);
int charactercontrol(char **av, build *arg);
int char_to_int(char **av, build *arg);
char	**ft_split(char const *s, char c);
int	ft_word_count(char const *str, char c);
char	*ft_putword(char *word, char const *s, int word_len, int word_len2);
char	**ft_split_words(char const *s, char c, char **new_str, int num_words);

#endif