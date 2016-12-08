#ifndef INC_3DVECTOR_VECTOR3D_H
#define INC_3DVECTOR_VECTOR3D_H

#include <ostream>

class Vector3D {

public:
    double X;
    double Y;
    double Z;

public:
    Vector3D();
    Vector3D(double X, double Y, double Z);

    void setX(double X);
    void setY(double Y);

    void setZ(double Z);
    double getX() const;

    double getY() const;
    double getZ() const;

    void setOrigin(Vector3D vector);

    Vector3D operator+(Vector3D vector3D);
    Vector3D operator-(Vector3D vector3D);

    Vector3D operator+=(Vector3D vector3D);
    Vector3D operator-=(Vector3D vector3D);

    Vector3D operator+=(double Scalar);
    Vector3D operator+(double Scalar);
    Vector3D operator-(double Scalar);

    Vector3D operator*(double Scalar);
    Vector3D operator/(double Scalar);

    Vector3D operator*=(double Scalar);
    Vector3D operator/=(double Scalar);

    double operator*(Vector3D vector3D);
    double operator*=(Vector3D vector3D);

    friend std::ostream &operator<<(std::ostream &os, const Vector3D &d);
    bool operator==(const Vector3D &rhs) const;
    bool operator!=(const Vector3D &rhs) const;

    bool operator<(const Vector3D &rhs) const;
    bool operator>(const Vector3D &rhs) const;
    bool operator<=(const Vector3D &rhs) const;
    bool operator>=(const Vector3D &rhs) const;

    bool operator<=(double Scalar) const;
    bool operator>=(double Scalar) const;



};

#endif //INC_3DVECTOR_VECTOR3D_H
