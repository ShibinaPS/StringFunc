#ifndef MY_STRING_H
#define MY_STRING_H

//=========================================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>

//=========================================================================================================
/**
 * @brief Сalculates the number of characters in a string up to the first occurrence of the end-of-line character.
 * 
 * @param str the string pointer
 * @return size_t 
 */

size_t my_strlen(const char* str);

//=========================================================================================================
/**
 * @brief Outputs a char* type string to the standard output stream and adds a newline character '\n'.
 * 
 * @param str the string pointer
 * @return size_t 
 */

size_t my_puts(const char* str);

//=========================================================================================================

/**
 * @brief Searches for the first occurrence of the symbol in the string.
 * 
 * @param str string pointer
 * @param symbol desired symbol
 * @return char* 
 */

char* my_strchr(char* str, int symbol);

//=========================================================================================================

/**
 * @brief Copies string with the terminating null character to the destination string.
 * 
 * @param destptr the pointer to the new string
 * @param srcptr the pointer to the copied string
 * @return char* 
 */

char* my_strcpy(char* destptr, const char* srcptr);

//=========================================================================================================

/**
 * @brief Copies string with the terminating null character to the destination string until 
 *        the null character is encountered or the number of copied characters 
 *        reaches the value specified in the argument num.
 * 
 * @param destptr the pointer to the new string
 * @param srcptr the pointer to the copied string
 * @param num the maximum number of copied characters
 * @return char* 
 */

char* my_strncpy(char* destptr, const char* srcptr, size_t num);

//=========================================================================================================

/**
 * @brief Adds to the destination string the source string.
 * 
 * @param destptr the pointer to the new string
 * @param srcptr the pointer to the copied string
 * @return char* 
 */

char* my_strcat(char* destptr, const char* srcptr);

//=========================================================================================================

/**
 * @brief Adds the first num characters of the srcptr string to the end of the destptr string.
 * 
 * @param destptr the pointer to the new string
 * @param srcptr the pointer to the copied string
 * @param num the maximum number of copied characters
 * @return char* 
 */

char* my_strncat(char* destptr, char* srcptr, size_t num);

//=========================================================================================================

/**
 * @brief Duplicates the pointed string.
 * 
 * @param src the pointer to the string
 * @return char* 
 */

char* my_strdup(const char* src);

//=========================================================================================================

/**
 * @brief Reads characters from the stream and saves it as a string until the end of the string
 *        or until the end of the file.
 * 
 * @param dest the pointer to the new string
 * @param num the maximum number of characters to read
 * @param filename the pointer to the stream with the source data
 * @return const char* 
 */

const char* my_fgets(char* dest, size_t num, FILE* filename);

//=========================================================================================================

#endif //MY_STRING_H
