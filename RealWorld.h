#ifndef WORLD_REALWORLD_H
#define WORLD_REALWORLD_H

#include <ostream>
#include "Vector3D.h"

class RealWorld {

protected:
    Vector3D origin;
    double mass;
    double energy;
    bool active;

public:
    RealWorld();
    RealWorld(double X, double Y, double Z, double mass, double energy, bool active);

    void setOrigin(double X, double Y, double Z);
    const Vector3D &getOrigin() const;

    void setMass(double mass);
    double getMass() const;

    void setEnergy(double energy);
    double getEnergy() const;

    void setActive(bool active);
    bool isActive() const;


    double operator* (double Scalar);
    double operator/ (double Scalar);

    double operator*= (double Scalar);
    double operator/= (double Scalar);

    friend std::ostream &operator<<(std::ostream &os, const RealWorld &world);

    Vector3D *vector3D;

};


#endif //WORLD_REALWORLD_H
