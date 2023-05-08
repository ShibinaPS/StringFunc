#ifndef MY_STRING_H
#define MY_STRING_H

#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>

size_t my_strlen(const char* str);

size_t my_puts(const char* str);

char* my_strchr(char* str, int symbol);

char* my_strcpy(char* destptr, const char* srcptr);

char* my_strncpy(char* destptr, const char* srcptr, size_t num);

char* my_strcat(char* destptr, const char* srcptr);

char* my_strncat(char* destptr, char* srcptr, size_t num);

char* my_strdup(const char* src);

const char* my_fgets(char* dest, size_t num, FILE* filename);
#endif
