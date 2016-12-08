#include <iostream>
#include "Spherical.h"

int main() {
    Spherical *Fly = new Spherical;

    Fly->setPev(1, 9, 5, 10, 80, true);
    Fly->setTarget(2, 10, 6);

    std::cout << "Spherical Fly:\t\n" << Fly->getPev() << std::endl;
    std::cout << "\nTarget:\t" << Fly->getTarget() << std::endl;

    while (Fly->canReachTarget() && Fly->isAbleToMove()) {
        Fly->think();
        if (Fly->hasReachedTarget()) {
            std::cout << "\nThe object has reached the goal.\n" << std::endl;
            std::cout << "Spherical Fly:\t\n" << Fly->getPev() << std::endl;
            return 0;
        }
    }

    std::cout << "\nThe object did not reach the goal." << std::endl;

    return 0;
}
