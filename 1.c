#include<stdio.h>
int main()
{
	int i;
	double n1,n2=0;
	for(i=1;i<=50;i++)
	{	n2=n1;
		if(i%2==0) n1=2*n2;
		else n1=2*n2+1;
		printf("%.0lf ",n1);
		if(i%5==0) printf("\n");
	}
	return 0;
}
/*
#include<stdio.h>
int main()
{
	int i=0;
	double n1,n2=0;
	while(i<50)
	{	i++;
		n2=n1;
		if(i%2==0) n1=2*n2;
		else n1=2*n2+1;
		printf("%.0lf ",n1);
		if(i%5==0) printf("\n");
	}
	
	return 0;

}*/