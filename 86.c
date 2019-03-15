    #include <stdio.h>

    int main()
    {
       int first, second, *p, *q, remainder;

       printf("Enter two integers to add\n");
       scanf("%d%d", &first, &second);

       p = &first;
       q = &second;

       remainder = *p%*q;

       printf("Sum of the numbers = %d\n", remainder);

       return 0;
    }
