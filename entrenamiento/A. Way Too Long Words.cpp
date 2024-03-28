#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string words[n], solution[n];

    int size;
    for(int i = 0; i < n; i++)
    {
        std::cin >> words[i];
        size = words[i].length();
        
        if(size > 10)
        {
            solution[i] = (words[i][0] + std::to_string(size - 2)) + words[i][size - 1];
        }
        else
        {
            solution[i] = words[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << solution[i] << std::endl;
    }
    return 0;
}