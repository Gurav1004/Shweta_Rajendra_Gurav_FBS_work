void main()
{
	int no1,no2;
	char op;
	
	printf("Enter Number 1 :");
	scanf("%d",&no1);
	
	printf("Enter Number 2 :");
	scanf("%d",&no2);
	
	
	printf("Enter Operator :");
	scanf(" %c",&op);
	
	if(op == '+')
	  printf("Result = %d", no1 + no2);
	  
	else if(op == '-')
	      printf("Result = %d", no1 - no2);
	  
	else if(op == '*')
	     printf("Result = %d", no1 * no2);
	  
	else if(op == '/')
	     printf("Result = %d", no1 / no2);
	  
	else if(op == '%')
	      printf("Result = %d", no1 % no2);
	      
	else
	  printf("invalid operator");
	
	
	
}