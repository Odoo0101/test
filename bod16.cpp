// ogogdson toog tsag minut sekundiig zaigarr tusgaarlan hevle
#include<stdio.h>
int a,b,c,d,k;
main()
{
	scanf("%d", &a);
	k=a/3600;
	b=k/60;
	c=a%60;
	printf("%d %d %d", k,b,c);
}
