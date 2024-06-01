#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    int e, f, c;
    int n, total, residuo;

    scanf("%d %d %d", &e, &f, &c);

    n = e + f;
    total = 0;

    while (n >= c) {

        total += n/c;
        residuo = n - n/c*c;

        n = n/c + residuo;

    }

    printf("%d", total);

    return 0;

}