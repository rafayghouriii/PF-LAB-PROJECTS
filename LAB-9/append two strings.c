#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    getchar();
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    puts(strncat(str1,str2,n));
    
    return 0;
}