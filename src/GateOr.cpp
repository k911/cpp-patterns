#include <stdexcept>
#include "GateOr.h"
#include "Visitor.h"

void GateOr::add(const std::shared_ptr<AbstractLogic> &element) {
    if (children.size() == 3) {
        throw std::invalid_argument("GateOr cannot have more than 3 logic inputs");
    }

    children.push_back(element);
}

bool GateOr::operation() {
    if (children.empty()) {
        throw std::invalid_argument("Gate and cannot have 0 elements");
    }

    bool result = false;
    for (const auto &child : children) {
        result = result || child->operation();
    }
    return result;
}

void GateOr::accept(Visitor *visitor) {
    visitor->visitGateOr(this);
}

std::shared_ptr<AbstractLogic> GateOr::first() {
    return children[0];
}
