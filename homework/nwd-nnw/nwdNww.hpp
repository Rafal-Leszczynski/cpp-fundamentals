#pragma once

int NWD(int lhs, int rhs) {
        if (lhs == 0 || rhs == 0) {
        return 0;
    }
    if (lhs != rhs) {
        return NWD(lhs > rhs ? lhs - rhs : lhs, rhs > lhs ? rhs - lhs : rhs);
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }

    lhs = std::abs(lhs);
    rhs = std::abs(rhs);

    int temp;
    temp = rhs * lhs;
    while (lhs != rhs) {
        if (lhs > rhs) {
            lhs = lhs - rhs;
        } else {
            rhs = rhs - lhs;
        }
    }
    return (temp / lhs);
}
