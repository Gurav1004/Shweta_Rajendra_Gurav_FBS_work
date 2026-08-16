void main()
{
    int n = 7;
    int i = 2, status = 0;

    while(i < n)
    {
        if(n % i == 0)
        {
            status = 1;
            break;
        }
        i++;
    }

    if(n < 2)
        printf("Not Prime");
    else if(status == 0)
        printf("Prime");
    else
        printf("Not Prime");
}