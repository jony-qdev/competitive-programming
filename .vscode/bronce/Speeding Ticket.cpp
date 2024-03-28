#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::pair<int, int> row[n];
    std::pair<int, int> cow[m];

    for(int i = 0; i < n; i++)
    {
        std::cin >> row[i].first >> row[i].second;
        if(i > 0)
        {
            row[i].first += row[i - 1].first;
        }
    }

    for(int i = 0; i < m; i++)
    {
        std::cin >> cow[i].first >> cow[i].second;
        if(i > 0)
        {
            cow[i].first += cow[i - 1].first;
        }
    }

    int recorrido = 0, maximo = 0;
    for(auto i : cow)
    {
        while (i.first >= row[recorrido].first)
        {
            if(i.second - row[recorrido].second > maximo)
            {
                maximo = i.second - row[recorrido].second;
            }
            recorrido++;
        }
        
    }

    std::cout << maximo << std::endl;
    return 0;
}