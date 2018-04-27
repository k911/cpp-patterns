#ifndef BAZ_LAB_1_VISITOR_H
#define BAZ_LAB_1_VISITOR_H

#include "LogicInput.h"
#include "GateAnd.h"
#include "GateOr.h"
#include "GateXor.h"

class Visitor {
public:
    virtual void visitLogicInput(LogicInput *logicInput) = 0;
    virtual void visitGateAnd(GateAnd *logicInput) = 0;
    virtual void visitGateOr(GateOr *logicInput) = 0;
    virtual void visitGateXor(GateXor *logicInput) = 0;

    virtual ~Visitor() = default;
};


#endif //BAZ_LAB_1_VISITOR_H
