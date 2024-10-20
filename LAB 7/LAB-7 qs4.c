#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&a[i]);
    }
    //finding max
    int max=a[0];
    for(i=1;i<n;i++)
    {
    	if(max<a[i])
    	max=a[i];
	}
	int rep[max+1];
	for(i=0;i<=max;i++)
 {
	rep[i]=0;
 }
	for(i=0;i<n;i++)
 {
	rep[a[i]]++;
 }
	for(i=0;i<=max;i++)
	{
		if(rep[i]>1)
		printf("%d is repeated %d times\n",i,rep[i]);
	}
	return 0;
}