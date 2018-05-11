#include <iostream>
#include "NegateFirstBooleanVisitor.h"

void NegateFirstBooleanVisitor::visitLogicInput(LogicInput *logicInput) {
    logicInput->negate();
    std::cout << "Negate called" << std::endl;
}

void NegateFirstBooleanVisitor::visitGateAnd(GateAnd *logicInput) {
    logicInput->first()->accept(this);
}

void NegateFirstBooleanVisitor::visitGateOr(GateOr *logicInput) {
    logicInput->first()->accept(this);
}

void NegateFirstBooleanVisitor::visitGateXor(GateXor *logicInput) {
    logicInput->first()->accept(this);
}

void NegateFirstBooleanVisitor::visitGateNot(GateNot *logicInput) {
    logicInput->first()->accept(this);
}
