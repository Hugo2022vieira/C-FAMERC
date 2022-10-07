#include<stdio.h>
float media(int n1,int n2)
{
	media=(n1+n2)/2;
}

int main(void)
{
	int a,b;
	float media1;
	scanf("%d",&a);
	scanf("%d",&b);
	media1 = media(a,b);
	printf("%f",media1);
}
