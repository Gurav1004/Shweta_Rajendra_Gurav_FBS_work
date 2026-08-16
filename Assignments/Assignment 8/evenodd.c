void main()
{
    int arr[5] = {11, 22, 33, 44, 55};
       
    printf("Even numbers:");
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    
     printf("\nOdd numbers:");
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}