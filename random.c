#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,n;
    printf("Enter the number of random numbers to generate: ");
    scanf("%d",&n);
    printf("Random numbers: ");
    srand(time(0));
    for(i=0;i<n;i++)
    {
        printf("%d ",rand()%100);
    }
    printf("\n");
    return 0;
}