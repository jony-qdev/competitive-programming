#include <iostream>

int main()
{
    int m, n, k, aux;
    
    std::cin >> m >> n >> k;

    std::string lines[m];

    for(int i = 0; i < m; i++)
    {
        std::cin >> lines[i];
    }

    for(int i = 0; i < m; i++)
    {
        aux = k;
        while(aux--)
        {
            for(int j = 0; j < n; j++)
            {
                
                std::cout << lines[i][j] << lines[i][j];
                
            }
            std::cout << std::endl;
        }
        
    }
}