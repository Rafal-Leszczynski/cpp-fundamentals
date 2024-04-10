#pragma once

int NWD(int lhs, int rhs) {
    if (lhs != rhs) {
        return NWD(lhs > rhs ? lhs - rhs : lhs, rhs > lhs ? rhs - lhs : rhs);
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
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



