#include <stdexcept>
#include "GateXor.h"

bool GateXor::operation() {
    if (logicA == nullptr || logicB == nullptr) {
        throw std::invalid_argument("Logic inputs cannot be a null pointers");
    }

    return logicA->operation() ^ logicB->operation();
}
