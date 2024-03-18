#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    int X, N, Pi, result;

    scanf("%d", &X);
    scanf("%d", &N);

    result = X;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Pi);

        if (Pi < result)
        {
            result = result - Pi + X;
        }
        else
        {
            result = X;
        }
    }

    printf("%d", result);

    return 0;
}