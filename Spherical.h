#ifndef SPHERICAL_SPHERICAL_H
#define SPHERICAL_SPHERICAL_H

#include "RealWorld.h"

class Spherical {
private:
    RealWorld pev;
    Vector3D target;

public:
    Spherical();

    const RealWorld &getPev() const;
    void setPev(double X, double Y, double Z, double mass, double energy, bool active);

    const Vector3D &getTarget() const;
    void setTarget(double X, double Y, double Z);

    RealWorld think();

    bool hasReachedTarget();
    bool canReachTarget();
    bool isAbleToMove();

    Vector3D *vector3D;
};

#endif //SPHERICAL_SPHERICAL_H
