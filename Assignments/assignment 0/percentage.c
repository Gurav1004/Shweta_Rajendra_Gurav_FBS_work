void main()
{
	int sub1,sub2,sub3,sub4,sub5;
	int  sum;
	float percentage;
	
	printf("Enter marks of five sub :");
	scanf("%d%d%d%d%d",&sub1 , &sub2, &sub3, &sub4, &sub5);
	
	sum = sub1 + sub2 + sub3 + sub4 + sub5;
	printf("sum = %d", sum);
	
	percentage = sum / 5.0;
	printf("percentage = %f", percentage);
		
}