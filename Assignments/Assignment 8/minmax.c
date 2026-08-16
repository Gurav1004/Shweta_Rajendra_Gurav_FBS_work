void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(min > arr[i])
            min = arr[i];

        if(max < arr[i])
            max = arr[i];
    }

    printf("Min = %d\n", min);
    printf("Max = %d", max);
}