#include <stdio.h>
#include <string.h>
int main()
{
    char str1[3][20]={"rafay","football", "table"};
    char str2[20];
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2, "\n")] = '\0';
    int found;
    for(int i=0;i<3;i++)
    {
        if(strcmp(str1[i],str2)==0)
        {
            printf("found\n");
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("not found");
        
    }
    
    return 0;
}