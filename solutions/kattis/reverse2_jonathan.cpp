#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> myStack;
    int N;

    scanf("%d", &N);

    int X[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
        myStack.push(X[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", myStack.top());
    }
}
