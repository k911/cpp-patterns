#include "GateNot.h"
#include "Visitor.h"

bool GateNot::operation() {
    return !this->gate->operation();
}

void GateNot::accept(Visitor *visitor) {
    visitor->visitGateNot(this);
}

std::shared_ptr<AbstractLogic> GateNot::first() {
    return this->gate;
}
