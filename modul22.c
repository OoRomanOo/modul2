#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter array size:");
    int n[x + 1];
    for(int i = 0; i < x; i++)
    {
        n[i] = rand();
    }
    int min = n[0];
    int max = 0;
    for(int i = 0; i < x; i++){
        if(min > n[i]){
            min = n[i];
        }
        if(max < n[i]){
            max = n[i];
        }
    }
    int c = min;
    min = max;
    max = c;
}