#ifndef BAZ_LAB_1_GATENOT_H
#define BAZ_LAB_1_GATENOT_H


#include <memory>
#include <utility>
#include "AbstractLogic.h"

class GateNot : public AbstractLogic {
    std::shared_ptr<AbstractLogic> gate;
public:
    GateNot(std::shared_ptr<AbstractLogic> a)
            : gate(std::move(a)) {}

    void accept(Visitor *visitor) override;

    std::shared_ptr<AbstractLogic> first();

    bool operation() override;
};


#endif //BAZ_LAB_1_GATENOT_H
