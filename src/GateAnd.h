#ifndef BAZ_LAB_1_GATEAND_H
#define BAZ_LAB_1_GATEAND_H

#include <vector>
#include "AbstractLogic.h"

class GateAnd : public AbstractLogic {
    std::vector<AbstractLogic *> children;
public:
    void add(AbstractLogic *element);

    void accept(Visitor *visitor) override;

    AbstractLogic* first();

    bool operation() override;
};


#endif //BAZ_LAB_1_GATEAND_H
