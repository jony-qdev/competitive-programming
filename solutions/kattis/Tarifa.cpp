#include <iostream>

int main()
{
    int x, n, resultado = 0;

    std::cin >> x >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        resultado += x;
        std::cin >> arr[i];
        resultado -= arr[i];
    }

    resultado += x;
    std::cout << resultado;


    return 0;
}