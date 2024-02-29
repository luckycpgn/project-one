// GROUP-3
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int c;
	char m;
	m='p';
	while(m =='p')
    {
    printf("\n\n\n0.Exit");
	printf("\n1.Find sum of two numbers.");
	printf("\n2.Find Simple Interest.");
	printf("\n3.Find the Fibonacci Series.");
	printf("\n4.Reverse the given number.");
	printf("\n5.Check odd or even.");
	printf("\n6.Find the prime factor.");
	printf("\n7.Find the electricity bill.");
	printf("\n8.Find the largest number among three.");
	printf("\n9.Find the factorial of the number.");
	printf("\n10.Find the sum of the series.");
	printf("\n11.check the number is Positive or Negative.");
	printf("\n12.Count the number of digits in the number.");
	printf("\n13.Find the HCF and LCM of two numbers.");
	printf("\n14.Sum of digits in a number.");
	printf("\n15.Check if number is greater than n1, less than n2 and divisible by 7.");
	printf("\n\n\nPlease! enter any option you want frome above menu: ");
	
    	scanf("%d",&c);
	switch(c)
	{
		case 0: // exit
			{
				exit(EXIT_SUCCESS);
			}
		case 1: //to find the sum of two numbers 
	{
		int a,b,s ;
		printf("enter number a:");
		scanf("%d", &a);
		printf("enter number b:");
		scanf("%d", &b);
		s=a+b;
		printf("The sum of number is %d+%d=%d",a,b,s);
		break;
	}

		case 2: //to find the simple interst.
	{
		int s,p,t,r;
		printf("enter number p:");
		scanf("%d", &p);
		printf("enter number t:");
		scanf("%d", &t);
		printf("enter number r:");
		scanf("%d", &r);
		s=(p*t*r)/100;
		printf("The simple interest of the number is %d=(%d*%d*%d)/100",s,p,t,r);
		break;	
	}

		case 3: //print the fibonacci series upto n terms
	{
		int n, first=0, second=1, next,c;
		printf("enter number of term;");
		scanf("%d", &n);
		printf("first %d number of fibonacci terms are:",n);
		for(c=0;c<n;c++)
		{
			if (c<=1)
			next =c;
			else
			{
			next=first+second;
			first=second;
			second=next;
			}
		printf("%d",next);
		}
	break;
	}

		case 4: //reverse the given number.
	{
		long num,rev=0;
		int digit;
		printf("Enter a number to be checked:");
		scanf("%d",&num);
		do {
			digit=num%10;
			rev=rev*10+digit;
			num/=10;
		}
		while (num!=0);
		printf("The reveersed number is %ld",rev);
		break;
	}

		case 5: //to check if the given number is odd or even.
	{
		int num, remainder;
		printf("enter a number:");
		scanf("%d", &num);
		remainder = num%2;
		if (remainder==0) 
		{
			printf("The number is even");
		}
		else
		{
			printf("The number is odd");
		}
		break;
	}

		case 6: //to find the prime factors of the number
	{
		int num,i=1,j,k;
		printf("Enter a number:");
		scanf("%d",&num);
		printf("The prime factors of %d are:\n",num);
		while (i<=num)
		{
			k=0;
			if (num%i==0)
			{
				j=1;
				while (j<=i)
				{
					if (i%j==0)
						k=k+1;
					j=j+1;
				}
			if (k==2)
				printf("%d\t",i);
			}
		i=i+1;
		}
		break;
	}

		case 7: //to calculate the electricity bill.
				//Rs20 for the first 20 Units, 
				//Rs8 for next 100 per Units, 
				//Rs10 for further anything more.
	{
		int a,b;
		printf("enter units:");
		scanf("%d",&a);
		if (a<=20)
		{
			b=a*80;
		}
		else if (a<=120)
		{
			b=20*80+(100-a)*8;
		}
		else 
		{
			b=20*80+8*100+(a-120)*10;
		}
		printf("The cost is %d",b);
		break;
	}

		case 8: //to find the largest number among  given three numbers
	{
		int a,b,c;
		printf("enter 3 numbers:");
		scanf("%d,%d,%d",&a,&b,&c);
		if (a>b && a>c)
		{
			printf("Largest = %d",a);
		}
		else if (b>a && b>c)
		{
			printf("Largest = %d",b);
		}
		else
		{
			printf("Largest = %d",c);
		}
		break;
	}

		case 9: //to find the factorial of the given number
	{
		int num,i;
		long fact=1;
		printf("\nEnter a number whose factorial is to be calculated:");
		scanf("%d", &num);
		for (i=1;i<=num;i++)
			fact*=i;
		printf("\nThe factorial is:%1d",fact);
		break;
	}

		case 10: //to find the sum of the series upto n terms(natural numbers)
	{
		int num,i,sum=0;
		printf("Enter a number:");
		scanf("%d", &num);
		for (i=1;i<=num;i++)
			sum+=i;
		printf("The sum is:%d",sum);
		break;
	}

		case 11: //to check if the given number is positive or negative
	{
		int a;
		printf("enter a number:");
		scanf("%d", &a);	
		if (a>0)
		{
			printf("The number is positive");
		}
		else if (a<0)
		{
			printf("The number is negative");
		}
		else
		{
			printf("The number is zero");
		}		
		break;
	}

		case 12: //to count the numbers of digit in the given number given by user
	{
		int num, count=0;
		printf("Enter a number:");
		scanf("%d", &num);
		while (num)
		{
			num=num/10;
			count=count+1;
		}
		printf("The digits is: %d",count);
		break;
	}

		case 13: // to find HCF and LCM of given two numbers
	{
		int a,b,c,d,hcf,lcm,temp;
		printf("Enter two values to find HCF and LCM:");
		scanf("%d,%d",&c,&d);
		a=c;
		b=d;
		while (a!=b)
			if (a>b)
			{
				a=a-b;
			}
			else
			{
				b=b-a;
			}
		hcf=a;
		lcm=(c*d)/hcf;
		printf("\nHCF of %d and %d is %d.",c,d,hcf);
		printf("\nLCM of %d and %d is %d.",c,d,lcm);
		break;
	}

		case 14: //Sum of digit in number.
	{
		int num,a,b,sum=0;
		printf("Enter a number:");
		scanf("%d",&num);
		do {
			a=num/10;
			b=num%10;
			num=a;
			sum=sum+b;
		}
		while(a!=0);
		printf("The sum of digits is:%d",sum);
		break;
	}

		case 15: //Check if number is greater than n1, less than n2 and divisible by 7.
	{
		int n1,n2,count=0,i,sum=0;
		printf("Enter n1 and n2:");
		scanf("%d,%d",&n1,&n2);
		if (n1>n2)
		{
			printf("Enter n1 and n2 such that n1<n2");
		}
		else 
		{
			for (i=n1+1;i<n2;i=i+1)
			{
				if (i%7==0)
				{
					count=count+1;
					sum=sum+i;
				}
			}
			printf("The sum is %d",sum);
			printf("The number of integers greater than %d,less than %d and divisible by 7 is %d",n1,n2,count);
		}
		break;
	}
	default:
   		{
		printf("Please Enter Valid Option(from 0-15)");
		printf("enter the menu number again\n");
		break;
		}
    } 
   	}
}
