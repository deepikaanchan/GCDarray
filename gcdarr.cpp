#include<stdio.h>
int gcd(int ip1, int ip2[]);
int main()
{
	int ans,n,i,gcd1,ip1;
	int ip2[25];
	printf("Enter num of elements:");
	scanf_s("%d", &ip1);
	printf("Enter array elements:");
	for (i = 0; i < ip1; i++)
		scanf_s("%d", &ip2[i]);
	gcd1 = gcd(ip1, ip2);
	printf("ans:%d", gcd1);
	scanf_s("%d", &n);
	return 0;
}
int gcd(int ip1, int ip2[])
{
	int rem,i,b,a,gcd,oc=0;
	for (i = 0; i < ip1 - 1;i++)
	{
		b = ip2[i++];
		if (oc == 0)
			a = ip2[i];
		else
			a = gcd;

		while ((rem = b % a) != 0)
		{
			rem = b%a;
			b = a;
			a = rem;
			oc++;
		}
		gcd = a;
		oc++;
	}
	return gcd;
}
