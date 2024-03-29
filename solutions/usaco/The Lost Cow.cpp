#include <iostream>

int main() {
    int x, y;

    std::cin >> x >> y;

    int i = 0, distancia_recorrida = 0, posicion_actual = x, variable = 1, posicion_pasada = posicion_actual;

    while(posicion_actual < y)
    {
        i++;
        if(i % 2 != 0)
        {
            posicion_actual = x + variable;

        }
        else
        {
            posicion_actual = x - variable;
        }
        variable *= 2;
        distancia_recorrida += abs(posicion_pasada - posicion_actual);
        posicion_pasada = posicion_actual;
    }

    distancia_recorrida -= abs(posicion_actual - y);

    std::cout << distancia_recorrida << std::endl;
    return 0;
}