#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int matriz[n];
    int imprimir[n];

    for(int i = 0; i < n; i++)
    {
        std::cin >> matriz[i];
        imprimir[n - 1 -i] = matriz[i];
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << imprimir[i] << std::endl;
    }
    return 0;
}