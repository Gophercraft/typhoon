#ifndef TEMPEST_RECT_C_IRECT_HPP
#define TEMPEST_RECT_C_IRECT_HPP

#include <cstdint>

class CiRect {
    public:
    union {
        int32_t t;
        int32_t miny;
    };
    union {
        int32_t l;
        int32_t minx;
    };
    union {
        int32_t b;
        int32_t maxy;
    };
    union {
        int32_t r;
        int32_t maxx;
    };
};

#endif;
