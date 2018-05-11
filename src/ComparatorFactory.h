#ifndef BAZ_LAB_1_COMPARATORFACTORY_H
#define BAZ_LAB_1_COMPARATORFACTORY_H


#include <vector>
#include <memory>
#include "AbstractLogic.h"

class ComparatorFactory {
public:
    std::tuple<std::shared_ptr<AbstractLogic>, std::shared_ptr<AbstractLogic>, std::shared_ptr<AbstractLogic>>
    make(const std::shared_ptr<AbstractLogic> &a, const std::shared_ptr<AbstractLogic> &b);

};


#endif //BAZ_LAB_1_COMPARATORFACTORY_H
