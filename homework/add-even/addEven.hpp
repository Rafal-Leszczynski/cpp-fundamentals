#pragma once
#include <vector>

int addEven(const std::vector<int> &numbers) {
  int answer = 0;
  int test = 0;
  //if (numbers.size() != 0) {
  for (int i = 0; i < numbers.size(); i++) {
    test = numbers[i];
    if (test % 2 == 0) {
      answer = (test + answer);
    }
  }
  //}
  return answer;
}
