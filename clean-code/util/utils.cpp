#include "utils.h"

unsigned int Utils::generateId() {

    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 999999);
    return dist(rng);

}

