#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

//creates an 'int' array to memorize the frequency of each char in str1 and str2
//I visualize like boxes: first[0-a] = how many 'a' it has; first[1-b] = how many 'b' it has; ...
int checkfreq(char str1[], char str2[])
{
    int first[26] = {0};
    int second[26] = {0};
    int i = 0;

    while (str1[i] != '\0')
    {
        //first[str1[0] - 'a'] += 1
        //first['a' - 'a'] = 0 += 1
        //first['c' - 'a'] = 2 += 1 (add 1 to the element "first[2] = 1")...
        first[str1[i] - 'a'] += 1;
        i += 1;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        second[str2[i] - 'a'] += 1;
        i += 1;
    }
    //in the end we compare each element of each array, 
    for (i = 0; i < 26; i++)
    {
        if (first[i] != second[i])
        return 0;
    }
    return 1;
}

int is_anagram(char* str1, char* str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    
    if (len1 != len2)
    {
        return 0;
        //printf("Is NOT anagram -> return %d\n", 0);
    }
    if (*str1 == '\0' && *str2 == '\0')
    {
        return 1;
        //printf("Is anagram -> return %d\n", 1);
    }
    if (checkfreq(str1, str2) == 1)
    {
        return 1;
        //printf("Is anagram -> return %d\n", 1);
    }
    else
    {
        return 0;
        //printf("Is NOT anagram -> return %d\n", 0);
    }
}
/*
int main(int ac, char** av)
{
    char* word1 = "abelha";
    char* word2 = "blaeha" ;
    is_anagram(word1, word2);
    return 0;
}*/
