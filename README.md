# libft


## char **ft_strsplit(char const *s, char c);
Allocates and returns an array of “fresh” strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter. If the allocation fails the function returns NULL. Example: ft_strsplit("*hello*fellow***students*", ’*’) returns the array ["hello", "fellow", "students"].

## char *ft_itoa(int nb);
Allocate and returns a “fresh” string ending with ’\0’ representing the integer nb given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.

## char *ft_itoabase(unsigned int nb, char *base);
Allocate and returns a “fresh” string ending with ’\0’ representing the integer nb given as argument in the base given by the second argument formated as string. Negative numbers must be supported. If the allocation fails, the function returns NULL.

## char *ft_strcat(char *s1, const char *s2);
appends the s2 string to the s1 string, overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte. The strings may not overlap, and the dest string must have enough space for the result. If dest is not large enough, program behavior is unpredictable.

## char *ft_strchr(const char *s, int c);
returns a pointer to the first occurrence of the character c in the string s or NULL.

## char *ft_strcpy(char *dest, const char *src);
copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest. The strings may not overlap, and the destination string dest must be large enough to receive the copy.

## char *ft_strdup(char *src);
returns a pointer to a new string which is a duplicate of the string s.

## char *ft_strjoin(char const *s1, char const *s2);
Allocates and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.

## char *ft_strjoinfree(char **s1, char **s2, int which);
Allocates and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL. String(s) selected with which is/are freed.

## char *ft_strmap(char const *s, char (*f)(char));
Applies the function f to each character of the string given as argument to create a “fresh” new string resulting from the successive applications of f.

## char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
Applies the function f to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string resulting from the successive applications of f.

## char *ft_strncat(char *s1, const char *s2, size_t n);
appends the s2 string to the s1 string, overwriting the terminating null byte ('\0') at the end of s1, and then adds a terminating null byte. The strings may not overlap, and the dest s1 must have enough space for the result. If dest is not large enough, program behavior is unpredictable

## char *ft_strncpy(char *dest, const char *src, size_t len);
copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest. The strings may not overlap, and the destination string dest must be large enough to receive the copy.

## char *ft_strnew(size_t size);
Allocates and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL.

## char *ft_strrchr(const char *s, int c);
returns a pointer to the last occurrence of the character c in the string s.

## char *ft_strrealloc(char *str, int size);

## char *ft_strstr(const char *big, const char *little);
locates the first occurrence of the null-terminated string little in the null-terminated string big.

## char *ft_strnstr(const char *s1, const char *s2, size_t n);
locates the first occurrence of the null-terminated string s2 in the string s1, where not more than n characters are searched.	Characters that appear after a '\0' character are not searched.

## char *ft_strsub(char const *s, unsigned int start, size_t len);
Allocates and returns a “fresh” substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL

## char *ft_strtrim(char const *s);
Allocates and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL.

## int ft_atoi(char *str);

## int ft_isalnum(int i);

## int ft_isalpha(int i);

## int ft_isascii(int i);

## int ft_isdigit(int i);

## int ft_isprint(int i);

## int ft_itoalen(int nb);

## int ft_lstlen(t_list *lst);

## int ft_memcmp(const void *s1, const void *s2, size_t len);

## int ft_strcmp(char *s1, char *s2);

## int ft_strequ(char const *s1, char const *s2);
Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.

## int ft_strlen(char *str);

## int ft_strncmp(const char *s1, const char *s2, size_t size);

## int ft_strnequ(char const *s1, char const *s2, size_t n);
Lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.

## int ft_tolower(int i);

## int ft_toupper(int i);


## int ft_wtablen(int *str);

## size_t ft_strlcat(char *s1, const char *s2, size_t n);

## t_list *ft_lstgoto(t_list *lst, int place);

## t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

## t_list *ft_lstnew(void const *content, size_t content_size);

## void *ft_memalloc(size_t size);
Allocates and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.

## void *ft_memccpy(void *dst, const void *src, int c, size_t n);

## void *ft_memchr(const void *s, int c, size_t n);

## void *ft_memcpy(void *dst, const void *src, size_t n);

## void *ft_memmove(void *dst, const void *src, size_t len);

## void *ft_memset(void *s, int c, size_t n);

## void ft_bzero(void *s, size_t n);

## void ft_lstadd(t_list **alst, t_list *new);

## void ft_lstaddend(t_list **alst, t_list *new);

## void ft_lstdel(t_list **alst, void (*del)(void *, size_t));

## void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

## void ft_lstiter(t_list *lst, void (*f)(t_list *elem));

## void ft_lstreplace(t_list **lst, t_list *new, int place);

## void ft_memdel(void **ap);
n Takes as a parameter the address of a memory area that needs to be freed, then puts the pointer to NULL.

## void ft_putchar(char c);
Description Outputs the character c to the standard output.

## void ft_putchar_fd(char c, int fd);
Description Outputs the character c to the fd file descriptor.

## void ft_putendl(char const *s);
Outputs the string s to the standard output followed by a ’\n’.

## void ft_putendl_fd(char const *s, int fd);
Outputs the string s to the fd file descriptor followed by a ’\n’.

## void ft_putnbr(int n);
Outputs the integer n to the standard output.

## void ft_putnbr_fd(int n, int fd);
Outputs the integer n to the fd file descriptor.

## void ft_putnbrbase(unsigned int n, char *base);
Outputs the integer n to the standard output in the chosen base.

## void ft_putoctal(unsigned int n);

## void ft_putstr(char const *str);
Outputs the string s to the standard output.

## void ft_putstr_fd(char const *str, int fd);
Outputs the string s to the fd file descriptor.

## void ft_strclr(char *s);
Sets every character of the string to the value ’\0’.

## void ft_strdel(char **as);
Takes as a parameter the address of a string that need to be freed, then sets its pointer to NULL.

## void ft_striter(char *s, void (*f)(char *));
Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary

## void ft_striteri(char *s, void (*f)(unsigned int, char *));
Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary

