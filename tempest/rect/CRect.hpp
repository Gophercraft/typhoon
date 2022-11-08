#ifndef TEMPEST_RECT_C_RECT_HPP
#define TEMPEST_RECT_C_RECT_HPP

#include <cmath>
#include <cstdint>

#include "tempest/Vector.hpp"

class CRect {
    public:
    union {
        float t;
        float miny;
    };
    union {
        float l;
        float minx;
    };
    union {
        float b;
        float maxy;
    };
    union {
        float r;
        float maxx;
    };

    CRect() = default;
    CRect(float x);
    void Get(float& t, float& l, float& b, float& r);
    void Set(float t, float l, float b, float r);
    void Stretch(C2Vector& x);
    void Stretch(float x, float y);
    void Offset(C2Vector& x);
    void Offset(float x, float y);
    bool NotEmpty();
    bool Empty();
    bool Invalid();
    bool NotInvalid();
    bool Encloses(CRect& rect);
    bool Encloses(C2Vector& point);
    bool Contains(CRect& rect);
    bool Contains(C2Vector& point);
    bool InOpenR(CRect& rect);
    bool InOpenR(C2Vector& point);
    float Width();
    float Height();
    void SetWidth(float width);
    void SetHeight(float height);
    C2Vector TopLeft();
    C2Vector TopRight();
    C2Vector BottomLeft();
    C2Vector BottomRight();
    void Center(CRect& rect);
    CRect Center();
    C2Vector Diagonal();
    // Center vertically
    void CenterV(const CRect& rect);
    // Center horizontally
    void CenterH(const CRect& rect);
    void AlignTop(const CRect& rect);
    void AlignLeft(const CRect& rect);
    void AlignBottom(const CRect& rect);
    void AlignRight(const CRect& rect);
    // Linearly interpolate
    CRect Lerp(const CRect& a, const CRect& b, const CRect& c);
    CRect Intersection(const CRect& a, const CRect& b, const CRect& c);
    static CRect Intersection(const CRect& a, const CRect& b);
    CRect Union(const CRect& a, const CRect& b);
    CRect Intersect(CRect& r);
    CRect Unite(const CRect& a);
    CRect ClippedLocal(const CRect& a, const CRect& b);

    uint32_t Difference(const CRect& a, const CRect& b, CRect* p);
};

#endif;
