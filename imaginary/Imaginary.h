
#ifndef CPP_EXERCISES_IMAGINARY_H
#define CPP_EXERCISES_IMAGINARY_H



#include <string>
#include <ostream>

using namespace std;

class Imaginary {
private:
    float real;
    float imag;
public:
    Imaginary(float real,float imag){
        this->real=real;
        this->imag=imag;
    }
    void add(Imaginary number);
    void add(float real,float imag);
    string toString();
    Imaginary operator+(Imaginary imag);

    bool operator<(const Imaginary &rhs) const;

    bool operator>(const Imaginary &rhs) const;

    bool operator==(const Imaginary &rhs) const;

    bool operator!=(const Imaginary &rhs) const;

    bool operator<=(const Imaginary &rhs) const;

    bool operator>=(const Imaginary &rhs) const;

    float getReal() const;

    float getImag() const;

    friend ostream &operator<<(ostream &os, const Imaginary &imaginary);
};

#endif //CPP_EXERCISES_IMAGINARY_H
