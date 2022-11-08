#ifndef TEMPEST_VECTOR_C_4VECTOR_HPP
#define TEMPEST_VECTOR_C_4VECTOR_HPP

class C4Vector {
    public:
    // Member variables
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float w = 0.0f;

    C4Vector& C4Vector::operator*=(float a);

    float Mag() const;
    void Normalize();
    float SquaredMag() const;
};

C4Vector operator+(const C4Vector& l, const C4Vector& r);

bool operator!=(const C4Vector& l, const C4Vector& r);


#endif
