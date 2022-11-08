#ifndef TEMPEST_VECTOR_C_2IVECTOR_HPP
#define TEMPEST_VECTOR_C_2IVECTOR_HPP

#include <cstdint>

class C2iVector {
    public:
    // Member variables
    int32_t x = 0.0f;
    int32_t y = 0.0f;

    // Member functions
    C2iVector() = default;
    C2iVector(int32_t x, int32_t y)
        : x(x)
        , y(y) {};
};

#endif
