#ifndef BAZ_LAB_1_GATEOR_H
#define BAZ_LAB_1_GATEOR_H

#include <vector>
#include "AbstractLogic.h"

class GateOr : public AbstractLogic {
    std::vector<AbstractLogic *> children;
public:
    void add(AbstractLogic *element);

    bool operation() override;
};


#endif //BAZ_LAB_1_GATEOR_H