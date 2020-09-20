#ifndef KSMALL_SOLUTION_CPP
#define KSMALL_SOLUTION_CPP

#include<iostream>
using namespace std;
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


int ksmallSolution::kSmallPartition(arrayTracker* unsortedArray){
    int first = 0;
    int last = unsortedArray->getSize()-1;

    int pivotIdx = first;
    int pivotValue = unsortedArray->getItem(pivotIdx);

    for(int compareIdx = 1; compareIdx < last + 1; compareIdx++) {
      if(unsortedArray->getItem(compareIdx) < pivotValue) {
        arraySwap(unsortedArray, compareIdx, pivotIdx+1);
        arraySwap(unsortedArray, pivotIdx, pivotIdx+1);
        pivotIdx++;
      }
    }
    cout << unsortedArray->getItem(pivotIdx) << " \n";
    return pivotIdx;
  }

#endif /* KSMALL_SOLUTION_CPP */
