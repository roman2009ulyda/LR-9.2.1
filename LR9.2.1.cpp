#include <iostream>

#include "params.h"
#include "macros.h"
#include "calc.h"

using namespace std;

int main()
{
    double x, y, w;
#if IS_FIRST_BRANCH(Z)
    PRINT_MSG("compiled branch: z > 3,  w = max((x-z)^2, x-y)");
#else
    PRINT_MSG("compiled branch: z <= 3, w = max(xy,yz) + max(zx,yz)");
#endif
    cout << "z = " << Z << " (set by macro Z)" << endl;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    w = calcW(x, y);
    PRINT_RESULT(w);

    cin.get();
    cin.get();
    return 0;
}