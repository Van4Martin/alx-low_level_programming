#ifndef MAIN_H_
#define MAIn_H_

char _putchar(char c);
char *create_array(unsigned int, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
