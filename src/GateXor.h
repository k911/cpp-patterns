#ifndef BAZ_LAB_1_GATEXOR_H
#define BAZ_LAB_1_GATEXOR_H

#include <memory>
#include <utility>
#include "AbstractLogic.h"

class GateXor : public AbstractLogic {
    std::shared_ptr<AbstractLogic> logicA = nullptr;
    std::shared_ptr<AbstractLogic> logicB = nullptr;
public:
    explicit GateXor(std::shared_ptr<AbstractLogic> a, std::shared_ptr<AbstractLogic> b)
            : logicA(std::move(a)), logicB(std::move(b)) {}

    void accept(Visitor *visitor) override;

    std::shared_ptr<AbstractLogic> first();

    bool operation() override;
};


#endif //BAZ_LAB_1_GATEXOR_H
