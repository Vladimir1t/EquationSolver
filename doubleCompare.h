#ifndef DOUBLECOMPARE_H_INCLUDED
#define DOUBLECOMPARE_H_INCLUDED

#include <stdio.h>
#include <math.h>

#define EPSILON 0.0001

//! Function compare two double
//! firstDouble [in]
//! secondDouble [in]
//! epsilon is a comparison standard
//! return '1' if they are equal or '0' if they are different

int DoubleCompare (double firstDouble, double secondDouble);

#endif // DOUBLECOMPARE_H_INCLUDED
