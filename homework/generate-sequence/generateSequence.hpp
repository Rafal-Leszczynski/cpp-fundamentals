#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> answer;
    int meter = 0;
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            meter = meter + step;
            answer.push_back(meter);
        }
    }
    return answer;
}
