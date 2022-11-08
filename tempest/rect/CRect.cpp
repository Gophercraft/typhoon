#include "tempest/rect/CRect.hpp"

CRect::CRect(float x) {
    Set(x, x, x, x);
}

void CRect::Get(float& t, float& l, float& b, float& r) {
    t = this->t;
    l = this->l;
    b = this->b;
    r = this->r;
}

void CRect::Set(float t, float l, float b, float r) {
    this->t = t;
    this->l = l;
    this->b = b;
    this->r = r;
}

void CRect::Stretch(C2Vector& x) {
    Stretch(x.x, x.y);
}

void CRect::Stretch(float x, float y) {

}

void CRect::Offset(C2Vector& x) {
    Offset(x.x, x.y);
}

void CRect::Offset(float x, float y) {
    // TODO: confirm
    this->l += x;
    this->r += x;
    this->t += y;
    this->b += y;
}

bool CRect::NotEmpty() {
    return !Empty();
}

bool CRect::Empty() {
    // TODO: confirm
    return Width() == 0 || Height() == 0;
}

bool CRect::Invalid() {

}

bool CRect::NotInvalid() {
    return !Invalid();
}

bool CRect::Encloses(CRect& rect) {

}

bool CRect::Encloses(C2Vector& point) {

}

bool CRect::Contains(CRect& rect) {

}

bool CRect::Contains(C2Vector& point) {

}

bool CRect::InOpenR(CRect& rect) {

}

bool CRect::InOpenR(C2Vector& point) {

}

float CRect::Width() {
    return r - l;
}

float CRect::Height() {
    return t - b;
}

void CRect::SetWidth(float width) {

}

void CRect::SetHeight(float height) {

}

C2Vector CRect::TopLeft() {

}

C2Vector CRect::TopRight() {

}

C2Vector CRect::BottomLeft() {

}

C2Vector CRect::BottomRight() {

}

void CRect::Center(CRect& rect) {

}

CRect CRect::Center() {

}

C2Vector CRect::Diagonal() {

}

// Center vertically
void CRect::CenterV(const CRect& rect) {

}

// Center horizontally
void CRect::CenterH(const CRect& rect) {

}

void CRect::AlignTop(const CRect& rect) {

}

void CRect::AlignLeft(const CRect& rect) {

}

void CRect::AlignBottom(const CRect& rect) {

}

void CRect::AlignRight(const CRect& rect) {

}

// Linearly interpolate
CRect CRect::Lerp(const CRect& a, const CRect& b, const CRect& c) {

}

CRect CRect::Intersection(const CRect& a, const CRect& b, const CRect& c) {

}

static CRect CRect::Intersection(const CRect& a, const CRect& b) {

}

CRect Union(const CRect& a, const CRect& b) {

}

CRect Intersect(CRect& r) {
    CRect rect;
    rect.maxx = fmin(this->maxx, r.maxx);
    rect.maxy = fmin(this->maxy, r.maxy);
    rect.minx = fmax(this->minx, r.minx);
    rect.miny = fmax(this->miny, r.miny);
    return rect;
}

CRect Unite(const CRect& a) {

}

CRect ClippedLocal(const CRect& a, const CRect& b) {

}

uint32_t Difference(const CRect& a, const CRect& b, CRect* p) {

}
