#include "MyString.h"

//=============================================================================================================

int main()
{
    char d[128];
    char s[128] = "Life is love";
    size_t num = 2;
    //=========================================================================================================

    printf("The result of the function my_strlen 'Life is love': %ld\n", my_strlen(s));

    //=========================================================================================================

    printf("The result of the function my_puts: %d\n", my_puts(s));

    //=========================================================================================================

    printf("The result of the function my_strchr : % ld\n", my_strchr(s, 'i') - s);

    //=========================================================================================================

    printf("The result of the function my_strcpy : %s\n", my_strcpy(d, s));

    //=========================================================================================================

    printf("The result of the function my_strcnpy : %s\n", my_strncpy(d, s, num));

    //=========================================================================================================

    char a[128] = "Hello, World!";
    char b[128] = "It`s me!";

    printf("The result of the function my_strcat : %s\n", my_strcat(a, b));

    //=========================================================================================================

    printf("The result of the function my_strncat : %s\n", my_strncat(a, b, num));

    //=========================================================================================================

    printf("The result of the function my_strdup : %s\n", my_strdup(s));

    //=========================================================================================================
    

    FILE* ptrFile = fopen("MyString.txt", "r");
   
    char dest[100];

    if (ptrFile == NULL)
    {
        ("File opening error");
    }

    else
    {
        printf("The result of the function my_fgets : %s\n", my_fgets(dest, 100, ptrFile));
        fclose(ptrFile);
    }

    //=========================================================================================================

    _getch();

    return 0;
}
