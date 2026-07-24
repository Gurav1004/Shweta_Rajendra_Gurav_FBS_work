void main()
{
    double bs, da, hra, ta, ts;

    printf("Enter basic salary: ");
    scanf("%lf", &bs);

    if (bs <= 5000)
    {
        da = bs * 0.10;
        ta = bs * 0.20;
        hra = bs * 0.25;
    }
    else
    {
        da = bs * 0.15;
        ta = bs * 0.25;
        hra = bs * 0.30;
    }

    ts = bs + da + ta + hra;

    printf("Total salary is: %.2lf", ts);

    
}