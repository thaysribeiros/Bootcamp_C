#include <stdio.h>

int my_strlen(char* str)
{
    int len = 0;
    while(str[len] != '\0')
    {
        len += 1;
    }
    return len;
}

char* my_strstr(char* haystack, char* needle ){

    int k = my_strlen(needle);
    int j = my_strlen(haystack);

    if (k > j)
    {
        return NULL;
    }
    if (*haystack == '\0' && *needle == '\0' || *needle == '\0') 
    {                
        return haystack;
    }
    while(*haystack) {

        char* pattern = needle;
        char* position = haystack;
            // If first character of sub string match, check for whole string       
            while (*haystack && *pattern && *haystack == *pattern) {
                haystack++;
                pattern++;
            }
             // If complete sub string match, return starting address 
            if (!*pattern) {
                return position;
            }            
            haystack = position + 1; // Increment main string 
            }
    return NULL;
}
/*
int main()
{
	char* haystack = "baby yoda";
	char* needle = "yoda";
	printf("%s\n", my_strstr(haystack, needle));
    return 0;
}*/
