void main()
{
	int num , first , last;
	printf("Enter the Num :");
	scanf("%d", &num);
	
	 first = num / 100;
	 last = num % 10;
	
    if(first == last)
	  printf("Number is pallindrome");
	else
	  printf("Number is not pallindrome");
	
}