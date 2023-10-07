#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include <stdio.h>
#include "doubleCompare.h"
#include "solveSquare.h"

enum nRoots
{
    INF_ROOTS = -1,
    NO_ROOTS  =  0,
    ONE_ROOT  =  1,
    TWO_ROOTS =  2,
};

struct TestData
{
    double a, b, c;
    double x1, x2;
    int nRoots;
};

int TestOne (const struct TestData* data, const size_t i);
int TestFile ();

//! Function includes the array of the reference roots and coefficients
//! Function counts how many tests are right
//! Return '1' if all tests are right or '2' if there are some mistakes

int TestAll ();

#endif // TEST_H_INCLUDED