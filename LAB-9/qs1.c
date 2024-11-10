#include <stdio.h>
#include <string.h>

int main(){
    char words[5][20]={"madam","racecar","key","radar","level"};
    int palindrome;
    for(int i=0;i<5;i++)
    {
        int length=strlen(words[i]);
        palindrome=1;
        for(int j=0;j<length/2;j++)
        {
            if(words[i][j]!=words[i][length-1-j])
            {
                palindrome=0;
                break;
            }
        }
        if(palindrome)
        {
        printf("Word %s is a palindrome \n",words[i]);
        }
        else
        {
        printf("No palindromes \n");
        }
    }
    return 0;
}