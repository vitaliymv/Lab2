#include "Spherical.h"

Spherical::Spherical() {
    vector3D = new Vector3D;
}

const RealWorld &Spherical::getPev() const {
    return pev;
}

void Spherical::setPev(double X, double Y, double Z, double mass, double energy, bool active) {
    pev.setOrigin(X, Y, Z);
    pev.setEnergy(energy);
    pev.setMass(mass);
    pev.setActive(active);
}

const Vector3D &Spherical::getTarget() const {
    return target;
}

void Spherical::setTarget(double X, double Y, double Z) {
    Spherical::target = Vector3D(X, Y, Z);
}

RealWorld Spherical::think() {
    Vector3D go = pev.getOrigin();
    double Energy = pev.getEnergy();
    double e = ((0.25 * pev.getMass()) * 0.5) + 0.3;

    if (pev.getOrigin().getX() <= target.getX()) {
        if (go.getX() == target.getX()) {
            go.setX(go.getX() + 0);
        } else {
            go.setX(go.getX() + 1);
            Energy -= e;
        }
    } else {
        go.setX(go.getX() - 1);
        Energy -= e;
    }

    if (pev.getOrigin().getY() <= target.getY()) {
        if (!go.getY() == target.getY()) {
            go.setY(go.getY() + 0);
        } else {
            go.setY(go.getY() + 1);
            Energy -= e;
        }
    } else {
        go.setY(go.getY() - 1);
        Energy -= e;
    }

    if (pev.getOrigin().getZ() <= target.getZ()) {
        if (!go.getZ() == target.getZ()) {
            go.setZ(go.getZ() + 0);
        } else {
            go.setZ(go.getZ() + 1);
            Energy -= e;
        }
    } else {
        go.setZ(go.getZ() - 1);
        Energy -= e;
    }


    pev.setOrigin(go.getX(), go.getY(), go.getZ());
    pev.setEnergy(Energy);

    return pev;
}

bool Spherical::hasReachedTarget() {
    if (pev.getOrigin() == getTarget()) {
        return true;
    } else {
        return false;
    }
}

bool Spherical::canReachTarget() {
    if (pev.getOrigin() >= 0 && target >= 0) {
        return true;
    } else {
        return false;
    }
}

bool Spherical::isAbleToMove() {

    if (pev.getEnergy() > 0 && pev.isActive() == true) {
        return true;
    } else {
        return false;
    }
}
