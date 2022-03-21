/*write a menudriven progarm to perform following task using udf and it's
defrent catagory*/
#include<stdio.h>
#include<conio.h>
int menu();
void primenumber();
void pallindrom();
void main()
{
	int c;
	clrscr();
	c=menu();
	switch(c)
{
		  case 1:primenumber();
			 break;

}

	getch();

}

int menu()
{

	int s;
	printf("\n Menu\n");
	printf("\n\t1.prime number\n\t2.palindrom number\n\t3.revers number\n\t4.even number\n\t5.exit");
	printf("\n-------------------------------------------------------\n");
	printf("Enter your chice:");
	scanf("%d",&s);
	return s;
}
void primenumber()
{
	int a,i;
	printf("Enter any number:");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
		   a=1;
		   break;
		   }
	       }

	       if(a==1)
	       {
		      printf("Number is not prime number");
	       }
	       else
	       {
		      printf("Number is prime number");
		}

}
