#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    scanf("%d", &N);

    int X[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d\n", X[i]);
    }

    return 0;
}