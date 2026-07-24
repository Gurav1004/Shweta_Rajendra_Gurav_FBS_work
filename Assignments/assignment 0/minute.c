void main()
{
	int minute,hours,remainingminutes;
	printf(" minute =");
	scanf("%d", &minute);
	
	hours = minute / 60;
	printf(" hours = %d \n", hours);
	
	remainingminutes = minute % 60;
	printf("remaining minutes = %d \n",  remainingminutes );
	
}