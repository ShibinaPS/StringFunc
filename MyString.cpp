#include "MyString.h"

//=========================================================================================================

size_t my_strlen(const char* str) 
{
    size_t i = 0;

    while (str[i] != '\0') 
    {
        i++;
    }

    return i;
}

//=========================================================================================================

size_t my_puts(const char* str)
{
    size_t i = 0;

    if (my_strlen(str) != 0)
    {
        for(i; i < my_strlen(str); i++) 
        {
            putchar(str[i]);
        }
    }
    putchar('\n');
    return i;
}

//=========================================================================================================

char* my_strchr(char* str, int chr)
{
    size_t i = 0;

    for (i; i <= my_strlen(str); i++)
    {
        if (str[i] == chr)
        {
            return str + i + 1;
        }
    }
    return NULL;
}

//=========================================================================================================

char* my_strcpy(char* dest, const char* src)
{
    if (dest == NULL) 
    {
        return NULL;
    }

    size_t i = 0;

    while (src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;

}

//=========================================================================================================

char* my_strncpy(char* dest, const char* src, size_t num)
{
    size_t i = 0;

    for (i; i <= my_strlen(src); i++)
    {
        if (i < num)
        {
            dest[i] = src[i];
        }
    }
    for (i; i <= my_strlen(dest); i++) 
    {
        dest[i] = '\0';
    }
    return dest;
}

//=========================================================================================================

char* my_strcat(char* dest, const char* src)
{
    int i = 0, j = 0;
    while (dest[i] != '\0') 
    {
        i++;
    }
    while (src[j] != '\0') 
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

//=========================================================================================================

char* my_strncat(char* dest, char* src, size_t num)
{
    int i = 0, j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (j < num && src[j] != '\0' && dest[i] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    while (i < my_strlen(dest)) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

//=========================================================================================================

char* my_strdup(const char* src)
{
    size_t len = my_strlen(src) + 1;
    
    char* str = (char*) calloc(len, sizeof(char));
    
    my_strncpy(str, src, len);

    return str;
}

//=========================================================================================================

const char* my_fgets(char* dest, size_t num, FILE* filename)
{
    
    if (filename == NULL) 
    {

        return NULL;
    }
    else
    {

        int smb = fgetc(filename);

        const char* the_frst_dest = dest;

        while ((smb != '\n') && (smb != EOF) && ((size_t) (dest - the_frst_dest) < num))
        {
            *dest = (char)smb;
            dest++;
            smb = fgetc(filename);
        }
        *dest = '\0';
        return the_frst_dest;
    }

}