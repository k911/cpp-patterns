#include <stdexcept>
#include "GateOr.h"

void GateOr::add(AbstractLogic *element) {
    if (children.size() == 3) {
        throw std::invalid_argument("GateAnd cannot have more than 3 logic inputs");
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
