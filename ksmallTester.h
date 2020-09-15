#ifndef KSMALL_TESTER_HPP
#define KSMALL_TESTER_HPP

#include "arrayTracker.h"

class ksmallTester
{
private:
public:
  ksmallTester();
  int testPartition(arrayTracker* testSubject, int pivotIndex);
};
#endif /* KSMALL_TESTER_HPP */
