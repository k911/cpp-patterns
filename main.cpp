#include <iostream>
#include <vector>
#include <memory>
#include "src/LogicInput.h"
#include "src/GateXor.h"
#include "src/GateAnd.h"
#include "src/GateOr.h"
#include "src/ComparatorFactory.h"
#include "src/NegateFirstBooleanVisitor.h"

using namespace std;

std::string toDigit(const std::shared_ptr<AbstractLogic> &in) {
    return in->operation() ? "1\t" : "0\t";
}

int main() {
    auto input1 = make_shared<LogicInput>(false);
    cout << "INPUT1 val: " << input1->operation() << endl;
    NegateFirstBooleanVisitor negVisitor;
    input1->accept(&negVisitor);
    cout << "INPUT1 val: " << input1->operation() << endl;

    auto input2 = make_shared<LogicInput>(true);
    auto input3 = make_shared<LogicInput>(true);
    auto gate = make_shared<GateXor>(input1, input2);
    cout << "XOR: " << gate->operation() << endl;

    gate->accept(&negVisitor);

    auto gateAnd = make_shared<GateAnd>();
    gateAnd->add(input1);
    gateAnd->add(input2);
    gateAnd->add(input3);
    cout << "AND: " << gateAnd->operation() << endl;

    auto gateOr = make_shared<GateOr>();
    gateOr->add(input1);
    gateOr->add(input2);
//    gateOr->add(input3); // test adding > 3 logicinputs
    gateOr->add(gateAnd);
    cout << "OR: " << gateOr->operation() << endl;
    gateOr->accept(&negVisitor);

    // Test exception
//    auto gateXor2 = make_shared<GateXor>(nullptr, nullptr);
//    gateXor2->operation();

    auto inputTrue = make_shared<LogicInput>(true);
    auto inputFalse = make_shared<LogicInput>(false);
    auto comparatorFactory = make_shared<ComparatorFactory>();

    cout << "A\tB\tFw\tFr\tFm" << endl;
    auto result1 = comparatorFactory->make(inputFalse, inputFalse);
    cout << toDigit(inputFalse) << toDigit(inputFalse) << toDigit(get<0>(result1)) << toDigit(get<1>(result1)) << toDigit(get<2>(result1)) << endl;

    auto result2 = comparatorFactory->make(inputFalse, inputTrue);
    cout << toDigit(inputFalse) << toDigit(inputTrue) << toDigit(get<0>(result2)) << toDigit(get<1>(result2)) << toDigit(get<2>(result2)) << endl;

    auto result3 = comparatorFactory->make(inputTrue, inputFalse);
    cout << toDigit(inputTrue) << toDigit(inputFalse) << toDigit(get<0>(result3)) << toDigit(get<1>(result3)) << toDigit(get<2>(result3)) << endl;

    auto result4 = comparatorFactory->make(inputTrue, inputTrue);
    cout << toDigit(inputTrue) << toDigit(inputTrue) << toDigit(get<0>(result4)) << toDigit(get<1>(result4)) << toDigit(get<2>(result4)) << endl;
}


