#include <bits/stdc++.h>


using namespace std;

int main (){

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);


    int breaks, price, current_sum, result=-1e8;
    
    scanf("%d %d", &breaks, &price);

    int profit[breaks];

    for (int i = 0; i < breaks; i++){
        scanf("%d", &profit[i]);
        profit[i] -= price;
    }
    
    for (int i = 0; i < breaks; i++){
        current_sum = 0;

        for(int j = i; j < breaks; j++){
            current_sum += profit[j];
            if (current_sum < 0){
                break;
            }
            result = max({result, current_sum});

        } 
    }


    printf("%d", result);

    return 0;
}