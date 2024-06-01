#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int results[24];

    results[0] = 1;
    results[1] = 2;
    results[2] = 4;

    for (int i = 3; i < 24; i++){
        results[i] = results[i - 1] + results[i - 2] + results[i - 3];
    }

    scanf("%d", &n);


    printf("%d", results[n - 1]);

    
    return 0;
}