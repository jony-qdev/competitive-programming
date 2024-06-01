#include <bits/stdc++.h>

using namespace std;


int drinked_sodas(int n, int c) {

    if (n < c)
        return 0;
    return n/c + drinked_sodas(n/c + n - n/c*c, c);

}


int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    int e, f, c;

    scanf("%d %d %d", &e, &f, &c);

    printf("%d", drinked_sodas(e + f, c));

    return 0;

}