#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int answer = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (answer < vec[i]) {
            answer = vec[i];
        }
    }
    return answer;
}
