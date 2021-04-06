#include <stdio.h>

void Multiples_of_Number(){
	
	int i;
	int j;
	int k;
	
	printf(">>> This is a Base Number Multiplier\n");
	printf(">>> Enter the Base Multiplier : ");
	scanf("%d",&i);
	printf("\n");
	printf("Enter the Maximum Number To Check UpTo : ");
	scanf("%d",&j);
	
	for(k=i;k<=j;k=k*i)
	{
			printf("%d\n",k);
	}
}


void EvenNumbers(){

	printf(">>> This is a Even Number Generator Calculator\n\n");
	int i;
	int k;
	int j;
	
	printf(">>> Enter the Start Value : ");
	scanf("%d",&i);
	
	printf(">>> Enter the Maximum Value : ");
	scanf("%d",&j);
	if(i%2==0)
	{
		for(k=i;k<=j;k=k+2)
		{
			printf(">>> %d\n",k);
		}
	}else{
		i=i+1;
		for(k=i;k<=j;k=k+2)
		{
			printf(">>> %d\n",k);
		}
	}
}

void Factorial_Number(){
	printf("\nFactorial of Any Number\n");
	int l;
	printf("Input the number you want to get factorial\n");
	scanf("%d",&l);
	int fact = 1;
	if(l == 1)
	{
		printf(">>> L factorial is %d",fact+" \n");
	}
	else
	{
		while(l != 1)
		{
			fact = fact*(l);
			l--;
			//return fact;
		}
		printf("%d\n",fact);
	}
}

void PrimeNumber(){
	int choice;
	int x;
	int y;
	int i,j,n;
	printf(">>> Choose Operation To perform \n[1] Confirm If A number if Prime\n[2] Generate Prime Numbers\n\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			
			printf(">>> This Calculator Checks if a Number is Prime\n\n");
			printf(">>> Enter integer To check : ");
			scanf("%d",&y);
			for(x=2;x<=y-1;x++)
			{
				if(y%x == 0)
				{
					printf(">>> %d is not prime \n",y);
					break;
				}
			}
			if(x==y)
			{
		
				printf(">>> %d is prime \n",y);
			}
			break;
		case 2:///Generate many prime Numbers
			printf(">>> This Calculator will generate Many Prime Numbers\n");
			
    
    		printf(">>> Input the last number till which you want prime numbers\n");
    		scanf("%d",&n);
    
    		printf("Prime numbers are:-\n");    
    		for(i=2;i<=n;i++)
    		{
        		int c=0;
        		for(j=1;j<=i;j++)
        		{
            		if(i%j==0)
            		{
                		c++;
            		}
        		}
         
   	   	  	  if(c==2)
        		{
            		printf("%d ",i);
        		}
    		}
    			break;
    		default:
    			printf(">>> Invalid Input");
    			break;

			
	}
	    
}


int Calculator(){
	int firstNumber;
	int secondNumber;
	int results;
	int operation;
	
	printf("This is a Calculator that works with Two Numbers\nEnter the first Number : ");
	scanf("%d",&firstNumber);
	printf("\nEnter the second Number : ");
	scanf("%d",&secondNumber);
	
	printf("Enter the Operation To Perform\n[1]Addition\n[2]Subtraction\n[3]Division\n[4]Multiplication\n");
	scanf("%d",&operation);
	switch(operation){
		case 1:
			results = firstNumber + secondNumber;
			printf(">>> The answer is : %d \n",results);
			break;
		case 2:
			results = firstNumber - secondNumber;
			printf(">>> The answer is : %d \n",results);
			break;
		case 3:
			results = firstNumber / secondNumber;
			printf(">>> The answer is : %d \n",results);
			break;
		case 4:
			results = firstNumber * secondNumber;
			printf(">>> The answer is : %d \n",results);
			break;
		default:
			printf("\n>>> You entered Incorrect Integer");
			break;
	}
	return 0;	
}

int main(int argc, char** argv)
{
	int choice;
	printf("*************************************\n**What to Perform\n**[1]Calculation\n**[2]Get Factorial\n**[3]Get Prime Number\n**[4]Get Multiples of Numbers\n**[5]Get Even Numbers\n*************************************\n");
	printf("\n\n>>> ");
	scanf("%d",&choice);
	printf("\n");
	
	switch(choice){
		case 1:
			Calculator();
			break;
		case 2:
			Factorial_Number();
			break;
		case 3:
			PrimeNumber();
			break;
		case 4:
			Multiples_of_Number();
			break;
		case 5:
			EvenNumbers();
			break;
		default:
			printf("\n>>> You entered Incorrect Integer");
			break;
	}
	return 0;
}