#include "ComparatorFactory.h"
#include "GateXor.h"
#include "GateNot.h"
#include "GateAnd.h"

std::tuple<std::shared_ptr<AbstractLogic>, std::shared_ptr<AbstractLogic>, std::shared_ptr<AbstractLogic>>
ComparatorFactory::make(const std::shared_ptr<AbstractLogic> &a, const std::shared_ptr<AbstractLogic> &b) {
    auto xorGate = std::make_shared<GateXor>(a, b);
    auto notGate = std::make_shared<GateNot>(xorGate);
    auto firstAndGate = std::make_shared<GateAnd>();
    firstAndGate->add(a);
    firstAndGate->add(xorGate);

    auto secondAndGate = std::make_shared<GateAnd>();
    secondAndGate->add(b);
    secondAndGate->add(xorGate);

    return std::make_tuple(firstAndGate, notGate, secondAndGate);
}
