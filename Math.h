#pragma once
template <typename T>
class Math {
public:
    static T max1(T a, T b)
    {
        if (a > b)return a;
        else return b;
    }
    static T min1(T a, T b)
    {
        if (a < b)return a;
        else return b;
    }
    static T sum(T a, T b)
    {
        return a + b;
    }
    static T dil(T a, T b)
    {
        return a / b;
    }
    static T vidn(T a, T b) {
        return a - b;
    }
};
