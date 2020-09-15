#ifndef KSMALL_SOLUTION_CPP
#define KSMALL_SOLUTION_CPP

#include "ksmallSolution.h"
#include "arrayTracker.h"

ksmallSolution::ksmallSolution() {
}

void ksmallSolution::arraySwap(arrayTracker* swappingArray, int indexA, int indexB)
{
  int temp = swappingArray->getItem(indexA);
  swappingArray->setItem(indexA, swappingArray->getItem(indexB));
  swappingArray->setItem(indexB, temp);
}


int ksmallSolution::kSmallPartition(arrayTracker* unsortedArray)
{
    int pivotIndex = 0;
    /*
        YOUR CODE GOES HERE
    */
  return pivotIndex;
}

#endif /* KSMALL_SOLUTION_CPP */
