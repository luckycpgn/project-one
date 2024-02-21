// group 3
#include<stdio.h>
//to find the sum of two numbers 
void sum_of_2(){
	int a,b,s ;
	printf("enter number a:");
	scanf("%d", &a);
	printf("enter number b:");
	scanf("%d", &b);
	s=a+b;
	printf("The sum of number is %d+%d=%d",a,b,s);
}

//to find the simple interst.
void simple_interest(){
	int s,p,t,r;
	printf("enter number p:");
	scanf("%d", &p);
	printf("enter number t:");
	scanf("%d", &t);
	printf("enter number r:");
	scanf("%d", &r);
	s=(p*t*r)/100;
	printf("The simple interest of the number is %d=(%d*%d*%d)/100",s,p,t,r);	
}

//print the fibonacci series upto n terms
void fibonacci_series(){
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
}

//reverse the given number.
void reverse_number(){
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
}

//to check if the given number is odd or even.
void odd_even(){
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
}

//to find the prime factors of the number
void prime_factor(){
	int num,factor=2;
	printf("Enter the number to find its prime factor:");
	scanf("%d",&num);
	while(num>0)
	{
		while(num%factor==0)
		{
			printf("%d is the prime factor",factor);
			num=num/factor;
		}
		factor=factor+1;
	}
	printf("The prime numbers are:");
}

//to calculate the electricity bill.
//Rs20 for the first 20 Units, 
//Rs8 for next 100 per Units, 
//Rs10 for further anything more.
void electricity_bill(){
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
}

//to find the largest number among  given three numbers
void largest_among3(){
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
}

//to find the factorial of the given number
void factorial(){
	int num,i;
	long fact=1;
	printf("\nEnter a number whose factorial is to be calculated:");
	scanf("%d", &num);
	for (i=1;i<=num;i++)
		fact*=i;
	printf("\nThe factorial is:%1d",fact);
}

//to find the sum of the series upto n terms(natural numbers)
void sum_of_series(){
	int num,i,sum=0;
	printf("Enter a number:");
	scanf("%d", &num);
	for (i=1;i<=num;i++)
		sum+=i;
	printf("The sum is:%d",sum);
}

//to check if the given number is positive or negative
void positive_negative(){
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
}

//to count the numbers of digit in the given number given by user
void count_number(){
	int num, count=0;
	printf("Enter a number:");
	scanf("%d", &num);
	while (num)
	{
		num=num/10;
		count=count+1;
	}
	printf("The digits is: %d",count);
}

// to find HCF and LCM of given two numbers
void HCF_and_LCM(){
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
	printf("HCF of %d and %d is %d.",c,d,hcf);
	printf("LCM of %d and %d is %d.",c,d,lcm);
}

//Sum of digit in number.
void read_n_sum(){
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
}

//Check if number is greater than n1, less than n2 and divisible by 7.
void number_greater_less(){
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
}

void display_menu(){
//	printf("\n\n\n\t\3\3\3\3\3\3\3\3\3\3\3\3");
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
}

int main(void)
{
	int option;
	start:
		do{
			display_menu();
	printf("\n\n\nPlease! enter any option you want frome above menu: ");
	scanf("%d",&option);
	switch(option){
		case 0:
		break;
		case 1:
		sum_of_2();
		break;
		case 2:
		simple_interest();
		break;
		case 3:
		fibonacci_series();
		break;
		case 4:
		reverse_number();
		break;
		case 5:
		odd_even();
		break ;
		case 6:
		prime_factor();
		break;
		case 7:
		electricity_bill();
		break;
		case 8:
		largest_among3();
		break;
		case 9:
		factorial();
		break;		
		case 10:
		sum_of_series();
		break;
		case 11:
		positive_negative();
		break;	
		case 12:
		count_number();
		break;
		case 13:
		HCF_and_LCM();
		break;
		case 14:
		read_n_sum();
		break;
		case 15:
		number_greater_less();
		break;
		default:
		printf("Please Enter Valid Option(from 0-15)");
			
	}		
		}while(option!=option);
	goto start;
}
