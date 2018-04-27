#ifndef BAZ_LAB_1_GATEXOR_H
#define BAZ_LAB_1_GATEXOR_H

#include "AbstractLogic.h"

class GateXor: public AbstractLogic {
    AbstractLogic *logicA = nullptr;
    AbstractLogic *logicB = nullptr;
public:
    explicit GateXor(AbstractLogic *a, AbstractLogic *b): logicA(a), logicB(b) {}

    bool operation() override;
};


#endif //BAZ_LAB_1_GATEXOR_H
