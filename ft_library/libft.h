#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdio.h>

# define BUFFER_SIZE 1024
# define MAX_INT 2147483647

long int    ft_pow(int num, int pow);
int         ft_atoi(const char *str);
int         ft_atoi2(const char *str);
void        ft_squeeze(char *str, int c); // Протестить позже не на argv, а на чтении строк из файлов.
void        ft_squeeze_str(char *str1, char *str2);
void        ft_bzero(void *s, size_t n);
void	    ft_putchar(char c);
void        ft_putstr(char *str);
void	    ft_putnbr(int n);
int         ft_strcmp(const char *str1, const char *str2);
char        *ft_strcpy(char *dest, const char *src);
char        *ft_strdup(const char *str);
char	    *ft_strcat(char *str1, const char *str2);
char    	*ft_strchr(const char *str, int c);
char    	*ft_strrchr(const char *str, int c);
char    	*ft_strstr(const char *haystack, const char *needle);
char    	*ft_strsub(const char *str, unsigned int start, size_t len);
char    	*ft_strjoin(const char *str1, const char *str2);
char    	**ft_strsplit(const char *str, char c);
size_t  	ft_strlen(const char *str);
int     	ft_toupper(int c);
int         ft_tolower(int c);
int         ft_isalpha(int c);
int         ft_isdigit(int c);
int	        ft_isalnum(int c);
void        ft_itoa_base_2(int integer);
void        ft_itoa_base_16(int n);

#endif
