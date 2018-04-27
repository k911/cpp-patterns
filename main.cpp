#include <iostream>
#include <vector>
#include "src/LogicInput.h"
#include "src/GateXor.h"
#include "src/GateAnd.h"
#include "src/GateOr.h"
#include "src/NegateFirstBooleanVisitor.h"

using namespace std;

int main() {
    LogicInput input1(false);
    cout << "INPUT1 val: " << input1.operation() << endl;
    NegateFirstBooleanVisitor negVisitor;
    input1.accept(&negVisitor);
    cout << "INPUT1 val: " << input1.operation() << endl;

    LogicInput input2(true);
    LogicInput input3(true);
    GateXor gate(&input1, &input2);
    cout << "XOR: " << gate.operation() << endl;

    gate.accept(&negVisitor);

    GateAnd gateAnd;
    gateAnd.add(&input1);
    gateAnd.add(&input2);
    gateAnd.add(&input3);
    cout << "AND: " << gateAnd.operation() << endl;

    GateOr gateOr;
    gateOr.add(&input1);
    gateOr.add(&input2);
    gateOr.add(&input3);
//    gateOr.add(&gateAnd);
    cout << "OR: " << gateOr.operation() << endl;
    gateOr.accept(&negVisitor);

    // Test exception
    GateXor gateXor2(nullptr, nullptr);
//    gateXor2.operation();
}
