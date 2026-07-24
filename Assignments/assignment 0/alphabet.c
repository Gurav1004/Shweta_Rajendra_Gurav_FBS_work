void main()
{
	char ch;
	printf("enter character , digit , symbol :");
	scanf("%c", &ch);
	
	if(ch >='a' && ch <='z'|| ch >='A' && ch <= 'Z')
	{
		printf("it is alphabet");
		
		}
		else
		{
			if(ch >='0' && ch<='9')
			{
				printf("it is digit");
			}
			else
			{
				printf("it is symbol");
			}
			}
	
}