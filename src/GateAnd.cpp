#include <stdexcept>
#include "GateAnd.h"

void GateAnd::add(AbstractLogic *element) {
    if (children.size() == 3) {
        throw std::invalid_argument("GateAnd cannot have more than 3 logic inputs");
    }

    children.push_back(element);
}

bool GateAnd::operation() {
    if (children.empty()) {
        throw std::invalid_argument("Gate and cannot have 0 elements");
    }

    bool result = true;
    for (const auto &child : children) {
        result = result && child->operation();
    }
    return result;
}
