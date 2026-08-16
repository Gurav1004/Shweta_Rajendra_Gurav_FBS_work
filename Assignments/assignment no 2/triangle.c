void main()
{
	int a,b,c;
	printf("Enter three sides of Triangle :");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a==b && b==c)
	  printf("Equilateral triangle");
	  
	  else if(a==b || b==c || a==c)
	    printf("Isosceles Triangle");
	    
	  else if(a!=b && b!=c && a!=c)
	    printf("Scalene Triangle");
	 
}