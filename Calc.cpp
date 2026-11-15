#include "calc.h"
#include "params.h"
#include "macros.h"

double calcW(double x, double y)
{
    const double z = Z;
    double w;

#if IS_FIRST_BRANCH(Z)
    w = MAX(SQR(x - z), x - y);
#else
    w = MAX(x * y, y * z) + MAX(z * x, y * z);
#endif

    return w;
}