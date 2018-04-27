#include "LogicInput.h"
#include "Visitor.h"

bool LogicInput::operation() {
    return value;
}

void LogicInput::accept(Visitor *visitor) {
    visitor->visitLogicInput(this);
}

void LogicInput::negate() {
    this->value = !this->value;
}
