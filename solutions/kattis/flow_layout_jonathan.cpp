#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    int dim, width, height;
    vector<int> dims;
    vector<pair<int, int>> inputs;

    scanf("%d", &dim);
    dims.push_back(dim);

    while (dim != 0) {
        scanf("%d %d", &width, &height);
        inputs.push_back(make_pair(width, height));

        if (width == -1 && height == -1){
            scanf("%d", &dim);
            if (dim != 0)
                dims.push_back(dim);
        }
    }

    pair<int, int>* pointer_pair = inputs.data();
    int xdim, ydim, max_xdim, max_ydim;

    for (int i = 0; i < dims.size(); i++){
        xdim = 0;
        ydim = 0;
        max_xdim = 0;
        max_ydim = 0;
        dim = dims[i];

        while(true){
            width = (*pointer_pair).first;
            height = (*pointer_pair).second;

            if (width != -1 && height != -1){
                if (width <= dim && (xdim + width) <= dim){
                    xdim += width;
                    ydim = max({ydim, max_ydim + height});
                } else if (width <= dim && (xdim + width) > dim) {
                    max_xdim = max({max_xdim, xdim});
                    max_ydim = ydim;
                    xdim = width;
                    ydim = max_ydim + height;
                }
            } else {
                pointer_pair += 1;
                break;
            }

            pointer_pair += 1;
        }


        xdim = max({xdim, max_xdim});

        printf("%d x %d\n", xdim, ydim);


    }

    return 0;
}
