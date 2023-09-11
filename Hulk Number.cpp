#include <stdio.h>
int main()
{
	int s,i,a[6];
	for(i=0;i<6;i++)
	{
		printf("Enter A number");
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		if(a[i]>a[i-1])
		{
			s=a[i];
		}
		else
		{
			if(a[i]>s)
			s=a[i];
			else
			break;
		}
	}
	printf("The HULK NUMBER-%d",s);
}
