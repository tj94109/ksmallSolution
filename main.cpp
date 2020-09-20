#include <iostream>
#include <iomanip>
#include <fstream>
#include <cassert>
#include "arrayTracker.h"
#include "ksmallSolution.h"
#include "ksmallTester.h"
#include "ksmallRuleChecker.h"

using namespace std;

int main() {
  ksmallSolution temp;
  ksmallTester tester;
  ksmallRuleChecker checkRules;

    if(checkRules.checkString("ksmallSolution.cpp", "vector") != -1) {
        cout << "vector found\n";
    }
    if(checkRules.checkString("ksmallSolution.cpp", "[") != -1) {
        cout << "array found\n";
    }

  int testCaseSize = 10;
  int testCaseRuns = 10;
  int score;
  int scoreAverage = 0;

  for(int i=0; i<testCaseRuns; i++) {
    arrayTracker* test;
    test = new arrayTracker(testCaseSize, i+1);
    test->displayArray();//remove
    score = tester.testPartition(test, temp.kSmallPartition(test));
    test->displayArray();//remove
    if (score>=0)
      scoreAverage += score/testCaseRuns;
    else
      cout << "fail" << '\n';
    delete test;
  }
  cout << "par avg score: " << scoreAverage << '\n';
}
  /*
  ksmallSolution oneTwo = ksmallSolution();
  arrayTracker* test2 = new arrayTracker(5);
  test2->setItem(0,4);
  test2->setItem(1,6);
  test2->setItem(2,2);
  test2->setItem(3,5);
  test2->setItem(4,8);
  test2->displayArray();
  oneTwo.kSmallPartition(test2, 0, 4);
  test2->displayArray();
}**/



