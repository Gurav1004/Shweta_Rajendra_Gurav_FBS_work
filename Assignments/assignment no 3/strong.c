void main()
{
	int no = 145, sum = 0;
	int temp = no ,fact;
	while(no > 0)
	{
		fact = 1;
		int rem = no % 10;
		sum = sum + fact;
		no = no / 10;
	}
	if(sum == temp)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}