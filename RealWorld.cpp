#include "RealWorld.h"

RealWorld::RealWorld() {
    vector3D = new Vector3D;
}

RealWorld::RealWorld(double X, double Y, double Z, double mass, double energy, bool active) {
    vector3D->setX(X);
    vector3D->setY(Y);
    vector3D->setZ(Z);
    RealWorld::mass = mass;
    RealWorld::energy = energy;
    RealWorld::active = active;
    RealWorld::origin = Vector3D(X, Y, Z);
}

//  Coordinate:
void RealWorld::setOrigin(double X, double Y, double Z) {
    vector3D->setX(X);
    vector3D->setY(Y);
    vector3D->setZ(Z);
    RealWorld::origin = Vector3D(X, Y, Z);

}

const Vector3D &RealWorld::getOrigin() const {
    return origin;
}

// Mass:
void RealWorld::setMass(double mass) {
    RealWorld::mass = mass;
}

double RealWorld::getMass() const {
    return mass;
}

// Energy;
void RealWorld::setEnergy(double energy) {
    RealWorld::energy = energy;
}

double RealWorld::getEnergy() const {
    return energy;
}

// Active:
void RealWorld::setActive(bool active) {
    RealWorld::active = active;
}

bool RealWorld::isActive() const {
    return active;
}

double RealWorld::operator*(double Scalar) {
    mass = this->mass * Scalar;
    return mass;
}

double RealWorld::operator*=(double Scalar) {
    mass = this->mass * Scalar;
    return mass;;
}

double RealWorld::operator/(double Scalar) {
    mass = this->mass / Scalar;
    return mass;
}

double RealWorld::operator/=(double Scalar) {
    mass = this->mass / Scalar;
    return mass;
}

std::ostream &operator<<(std::ostream &os, const RealWorld &world) {
    os << "origin: " << world.origin << "\nmass: " << world.mass << "\nenergy: " << world.energy << "\nactive: "
       << world.active;
    return os;
}
