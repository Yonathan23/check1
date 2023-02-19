
#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

/*------------MAIN STRUCTURE LIST ----------*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*------------CONVERSIONS-----------*/
int					ft_toupper(int c);
int					ft_tolower(int c);
int 					ft_atoi(const char *str);
char				*ft_itoa(int n);

/*-------MATHS----------*/
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

/*--------------------------------STRINGS-------------------------------*/
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char *str, int fd);
void					ft_putendl_fd(char *str, int fd);
void					ft_putnbr_fd(int number, int fd);
size_t					ft_strlen(char const *str);
int					ft_strncmp(const char *s1, const char *s2, size_t num);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
size_t					ft_strlcpy(char *dst, const char *src, size_t dstsize);
char				*ft_strdup(const char *s1);
size_t	                                ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_substr(char const *s, unsigned int start,size_t len);
char				**ft_split(char const *s, char c);
/*-----------------------------------MEMORY-------------------------------*/
void				*ft_memset(void *str, int num, size_t length);
void				*ft_memcpy(void *dst, const void *src, size_t num);
int					ft_memcmp(const void *s1, const void *s2, size_t len);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memmove(void *dst, const void *src, size_t len);

/*----------------------RESETTOZERO--------------------*/
void					ft_bzero(void *s, size_t n);
#endif
