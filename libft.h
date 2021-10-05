#ifndef LIBFT_H
#define LIBFT_H

#include<stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t n);
char *ft_strdup(const char *s);
char *ft_strnstr(const char *s, const char *to_find, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char * s1, const char *s2, size_t n);
char *ft_substr(const char* s1, unsigned int start, size_t len);
void ft_bzero(void *p, size_t n);
void *ft_memset(void *p, int c, size_t n);
void *ft_memchr(const void *p, int c, size_t n);
int ft_memcmp(const void *p1, const void * p2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t n);
void *ft_calloc(size_t count, size_t size);

#endif
