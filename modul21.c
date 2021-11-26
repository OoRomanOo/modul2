#include <stdio.h>
#include <cs50.h>

int main()
{
    int n, k;
        do{
            n = get_int("Enter N: ");
            k = get_int("and K:");
          }
    while((n >= 1000 || k >= 1000) || (n < 1 || k < 1));
         
    int a[n + 1];
        for(int i = 0; i < n; i++)
        {
            a[0] = n;
            a[i + 1] = a[i] + 4;
        }
    
    int b[k + 1];
        for(int i = 0; i < k; i++)
        {
            b[i] = i;
        }
    
    int sum = 0;
    for(int i = 1; i < k - 1; i++){
        sum = a[i + 1] + 4;
        a[i + 1] = a[i] + 4;
    }
    printf("Output:%i\n", sum);
}