#ifndef PRINTROOTS_H_INCLUDED
#define PRINTROOTS_H_INCLUDED
#include <stdio.h>
#include "SolveSquare.h"
#include "PrintRoots.h"

void PrintRoots (int nRoots, double* x1, double* x2);

//! Function prints roots of evaluation and their number
//! nRoots [in] number of roots
//! x1 [in] first or only root
//! x2 [in] second root
//! Return roots number of roots

enum NumberOfRoots
{
    INF_ROOTs  = -1,
    NO_ROOTs   =  0,
    One_ROOT   =  1,
    Two_ROOTs  =  2
};

void PrintRoots (int nRoots, double* x1, double* x2)
{

    switch (nRoots)
    {

      case One_ROOT:
          printf ("one root: x = %lg\n", *x1);
          break;
     case Two_ROOTs:
          printf ("two roots: x1 = %lg, x2 = %lg\n", *x1, *x2);
          break;
      case INF_ROOTs:
          printf ("root is any number\n");
          break;
      case NO_ROOTs:
          printf ("no roots\n");
          break;
      default:
          printf ("error, program didn't complete\n");
    }
}

#endif