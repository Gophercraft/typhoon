#include "C4Vector.hpp"
#include "tempest/Math.hpp"

C4Vector& C4Vector::operator*=(float a) {
    this->x *= a;
    this->y *= a;
    this->z *= a;
    this->w *= a;

    return *this;
}

float C4Vector::Mag() const {
    return CMath::sqrt(this->SquaredMag());
}

void C4Vector::Normalize() {
    this->operator*=(1.0f / this->Mag());
}

float C4Vector::SquaredMag() const {
    return this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w;
}

C4Vector operator+(const C4Vector& l, const C4Vector& r) {
    float x = l.x + r.x;
    float y = l.y + r.y;
    float z = l.z + r.z;
    float w = l.w + r.w;

    return { x, y, z };
}

bool operator!=(const C4Vector& l, const C4Vector& r) {
    return l.x != r.x || l.y != r.y || l.z != r.z || l.w != r.w;
}
