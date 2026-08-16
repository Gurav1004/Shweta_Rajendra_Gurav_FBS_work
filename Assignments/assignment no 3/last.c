void main()
{
    int n = 12345;
    int first, last;

    first = n / 10000;
    last = n % 10;

    printf("%d", first + last);
}