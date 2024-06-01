#include <bits/stdc++.h>

using namespace std;

#define ROWS 4
#define COLS 4


int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    char letter[4];
    int int_letter;
    int row_letter, col_letter;
    int dispersion = 0;

     string lines[ROWS];

    // Leer las 4 líneas
    for (int i = 0; i < ROWS; ++i) {
        getline(cin, lines[i]);
    }

    // Imprimir cada letra por separado
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int_letter = (int) lines[i][j] - (int) 'A';

            if (lines[i][j] == '.'){
                continue;
                //int_letter = ROWS*COLS - 1;
            }

            row_letter = int_letter/COLS;
            col_letter = int_letter - row_letter*COLS;

            dispersion += abs(row_letter - i) + abs(col_letter - j);

        }
    }
    printf("%d", dispersion);
    

    return 0;

}