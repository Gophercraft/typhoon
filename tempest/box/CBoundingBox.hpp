#ifndef TEMPEST_BOX_C_BOUNDING_BOX_HPP
#define TEMPEST_BOX_C_BOUNDING_BOX_HPP

#include "tempest/range/CRange.hpp"

class CBoundingBox {
    public:
    CRange x;
    CRange y;
    CRange z;
};

#endif
