#ifndef BAZ_LAB_1_GATEAND_H
#define BAZ_LAB_1_GATEAND_H

#include <memory>
#include <vector>
#include "AbstractLogic.h"

class GateAnd : public AbstractLogic {
    std::vector<std::shared_ptr<AbstractLogic>> children{};
public:
    void add(const std::shared_ptr<AbstractLogic> &element);

    void accept(Visitor *visitor) override;

    std::shared_ptr<AbstractLogic> first();

    bool operation() override;
};


#endif //BAZ_LAB_1_GATEAND_H
