#ifndef TEMPEST_VECTOR_C_IMVECTOR_HPP
#define TEMPEST_VECTOR_C_IMVECTOR_HPP

#include <cstdint>

class CArgb4444 {
public:
  uint16_t b : 4;
  uint16_t g : 4;
  uint16_t r : 4;
  uint16_t a : 4;
};

class CArgb1555 {
public:
  uint16_t b : 5;
  uint16_t g : 5;
  uint16_t r : 5;
  uint16_t a : 1;
};

class CRgb565 {
public:
  uint16_t b : 5;
  uint16_t g : 6;
  uint16_t r : 5;

  CRgb565(uint8_t rb, uint8_t gb, uint8_t bb) {
    r = rb & 0x1f;
    g = gb & 0x3f;
    b = bb & 0x1f;
  }
};

class CImVector {
    public:
    uint8_t b;
    uint8_t g;
    uint8_t r;
    uint8_t a;

    CImVector(uint8_t a, uint8_t r, uint8_t g, uint8_t b) {
        this->a = a;
        this->r = r;
        this->g = g;
        this->b = b;
    }

    CImVector(uint32_t n) {
        *this = *(CImVector*)&n;
    }

    operator uint32_t() {
        return *(uint32_t*)this;
    }
};

#endif
