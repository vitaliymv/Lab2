#include "Vector3D.h"


Vector3D::Vector3D() {

}

Vector3D::Vector3D(double X, double Y, double Z) :
        X(X), Y(Y), Z(Z) {

}

//  Coordinate X:
void Vector3D::setX(double X) {
    Vector3D::X = X;
}

double Vector3D::getX() const {
    return X;
}

//  Coordinate Y:
void Vector3D::setY(double Y) {
    Vector3D::Y = Y;
}

double Vector3D::getY() const {
    return Y;
}

//  Coordinate Z:
void Vector3D::setZ(double Z) {
    Vector3D::Z = Z;
}

double Vector3D::getZ() const {
    return Z;
}

void Vector3D::setOrigin(Vector3D vector) {
    Vector3D::X = vector.X;
    Vector3D::Y = vector.Y;
    Vector3D::Z = vector.Z;
}


Vector3D Vector3D::operator+(double Scalar) {
    X = this->X + Scalar;
    Y = this->Y + Scalar;
    Z = this->Z + Scalar;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator-(double Scalar) {
    X = this->X - Scalar;
    Y = this->Y - Scalar;
    Z = this->Z - Scalar;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator+(Vector3D vector3D) {
    X = this->X + vector3D.X;
    Y = this->Y + vector3D.Y;
    Z = this->Z + vector3D.Z;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator+=(Vector3D vector3D) {
    X += vector3D.X;
    Y += vector3D.Y;
    Z += vector3D.Z;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator-(Vector3D vector3D) {
    X = this->X - vector3D.X;
    Y = this->Y - vector3D.Y;
    Z = this->Z - vector3D.Z;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator-=(Vector3D vector3D) {
    X -= vector3D.X;
    Y -= vector3D.Y;
    Z -= vector3D.Z;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator*(double Scalar) {
    X = this->X * Scalar;
    Y = this->Y * Scalar;
    Z = this->Z * Scalar;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator*=(double Scalar) {
    X *= Scalar;
    Y *= Scalar;
    Z *= Scalar;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator/(double Scalar) {
    X = this->X / Scalar;
    Y = this->Y / Scalar;
    Z = this->Z / Scalar;
    return Vector3D(X, Y, Z);
}

Vector3D Vector3D::operator/=(double Scalar) {
    X /= Scalar;
    Y /= Scalar;
    Z /= Scalar;
    return Vector3D(X, Y, Z);
}

double Vector3D::operator*(Vector3D vector3D) {
    X = this->X * vector3D.X;
    Y = this->Y * vector3D.Y;
    Z = this->Z * vector3D.Z;
    return X + Y + Z;
}

double Vector3D::operator*=(Vector3D vector3D) {
    X *= vector3D.X;
    Y *= vector3D.Y;
    Z *= vector3D.Z;
    return X + Y + Z;
}

bool Vector3D::operator==(const Vector3D &rhs) const {
    return X == rhs.X &&
           Y == rhs.Y &&
           Z == rhs.Z;
}

bool Vector3D::operator!=(const Vector3D &rhs) const {
    return !(rhs == *this);
}

std::ostream &operator<<(std::ostream &os, const Vector3D &d) {
    os << "X = " << d.X << "; Y = " << d.Y << "; Z = " << d.Z << ";";
    return os;
}

Vector3D Vector3D::operator+=(double Scalar) {
    X += Scalar;
    Y += Scalar;
    Z += Scalar;
    return Vector3D();
}

bool Vector3D::operator<(const Vector3D &rhs) const {
    if (X < rhs.X)
        return true;
    if (rhs.X < X)
        return false;
    if (Y < rhs.Y)
        return true;
    if (rhs.Y < Y)
        return false;
    return Z < rhs.Z;
}

bool Vector3D::operator>(const Vector3D &rhs) const {
    return rhs < *this;
}

bool Vector3D::operator<=(const Vector3D &rhs) const {
    return !(rhs < *this);
}

bool Vector3D::operator>=(const Vector3D &rhs) const {
    return !(*this < rhs);
}

bool Vector3D::operator<=(double Scalar) const {
    if (X <= Scalar)
        return true;
    if (Scalar <= X)
        return false;
    if (Y <= Scalar)
        return true;
    if (Scalar <= Y)
        return false;
    if (Z <= Scalar)
        return true;
    if (Scalar <= Z)
        return false;
}

bool Vector3D::operator>=(double Scalar) const {
    if (X >= Scalar)
        return true;
    if (Scalar >= X)
        return false;
    if (Y >= Scalar)
        return true;
    if (Scalar >= Y)
        return false;
    if (Z >= Scalar)
        return true;
    if (Scalar >= Z)
        return false;
}
