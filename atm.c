#include<stdio.h>
int main()
{
	char a[4];
	int i,k,n;
	for(i=1;i<=3;i++){
	
	printf("Enter Your Password: ");
	a[0]=getch();
	printf("*");
		a[1]=getch();
	printf("*");
		a[2]=getch();
	printf("*");
		a[3]=getch();
	printf("*");
	
	if(a[0]== 'A' && a[1]=='R' && a[2]=='I' && a[3]=='S')
	{   printf("\nEnter The Number For its Table : ");
	    scanf("%d",&n);
	    for(k=1;k<=20;k++)
	    {
	    	printf("%d X %d = %d\n",n,k,n*k);
		}
		printf("Thank You");
		getch();
		exit(0);
	}
	else{
		printf("\nWrong Password\n");
		getch();
	}
}
	return 0;
}
