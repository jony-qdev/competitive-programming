#include <stdio.h>
 
int main()
{
    int k;
    scanf("%i", &k);
 
    if(k > 2 && k % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}