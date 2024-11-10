#include <stdio.h>
void reverse(char arr[])
{
    int k=0;
    int size=0;
    int temp;
    int j;
    while(arr[k]!='\0')
    {
        k++;
        size++;
    }
    printf("%d is the size of the array",size);
    // reverse
    for(int i=0, j=size-1;i<=j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main()
{
    char str[100];
    printf("enter string\n");
    fgets(str,100,stdin);
    puts(str);
    reverse(str);
    puts(str);
    
    return 0;
}