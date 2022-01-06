#include<Stdio.h>
//gai
int juedui(int n);

int main()
{
	char c,fenbian[200],d;
	int a[100],b[100],w[100],min,n;
	int i = 0,j,chang,kuan;
	
	while(1)
	{
		scanf("%d%c%d%c",&a[i],&d,&b[i],&c);
		
		if(c != ',')
		break;
		i++;
		
	}
	scanf("%d %d",&chang,&kuan);
	
	for(j = 0;j <= i;j++)
	{
		w[j] = chang * juedui(kuan - b[j]) + kuan *juedui(chang - a[j]); 
	}
	
	min = w[0];
	int times = 0;
	for(j = 1;j < i;j++)
	{
			if(w[j] < min)
			{
				times = j;
				min = w[j];
			}
	}
	printf(" %d * %d\n",a[times],b[times]);
	
	
	return 0;
}

int juedui(int n)
{
	if(n > 0)
	return n;
	else
	return -n;
	
	
	
	
}
