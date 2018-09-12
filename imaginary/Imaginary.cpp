
#include "Imaginary.h"

void Imaginary::add(Imaginary number) {
    this->imag+=number.imag;
    this->real+=number.real;
}

void Imaginary::add(float real, float imag) {
    this->imag+=imag;
    this->real+=real;

}

string Imaginary::toString() {
    return to_string(real)+"+"+to_string(imag)+"j";
}

float Imaginary::getReal() const {
    return real;
}

float Imaginary::getImag() const {
    return imag;
}


bool Imaginary::operator<(const Imaginary &rhs) const {
    if (real < rhs.real)
        return true;
    if (rhs.real < real)
        return false;
    return imag < rhs.imag;
}

bool Imaginary::operator>(const Imaginary &rhs) const {
    return rhs < *this;
}

bool Imaginary::operator<=(const Imaginary &rhs) const {
    return !(rhs < *this);
}

bool Imaginary::operator>=(const Imaginary &rhs) const {
    return !(*this < rhs);
}

ostream &operator<<(ostream &os, const Imaginary &imaginary) {
    os << "real: " << imaginary.real << " imag: " << imaginary.imag;
    return os;
}

bool Imaginary::operator==(const Imaginary &rhs) const {
    return real == rhs.real &&
           imag == rhs.imag;
}
Imaginary Imaginary::operator+(Imaginary imaginary){
    this->real+=imaginary.real;
    this->imag+=imaginary.imag;
}

bool Imaginary::operator!=(const Imaginary &rhs) const {
    return !(rhs == *this);
}
