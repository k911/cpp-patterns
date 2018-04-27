#ifndef BAZ_LAB_1_LOGICINPUT_H
#define BAZ_LAB_1_LOGICINPUT_H

#include "AbstractLogic.h"

class LogicInput : public AbstractLogic {
    bool value;
public:
    explicit LogicInput(bool val) : value(val) {}

    bool operation() override;

    void negate();

    void accept(Visitor *visitor) override;
};


#endif //BAZ_LAB_1_LOGICINPUT_H
