#ifndef BAZ_LAB_1_NEGATEFISTBOOLEANVISITOR_H
#define BAZ_LAB_1_NEGATEFISTBOOLEANVISITOR_H


#include "Visitor.h"

class NegateFirstBooleanVisitor: public Visitor {
public:
    void visitLogicInput(LogicInput *logicInput) override;

    void visitGateAnd(GateAnd *logicInput) override;

    void visitGateOr(GateOr *logicInput) override;

    void visitGateXor(GateXor *logicInput) override;
};


#endif //BAZ_LAB_1_NEGATEFISTBOOLEANVISITOR_H
