cmake_minimum_required(VERSION 3.9)
project(baz_lab_1)

set(CMAKE_CXX_STANDARD 11)

add_executable(baz_lab_1 main.cpp src/LogicInput.cpp src/LogicInput.h src/AbstractLogic.h src/GateXor.cpp src/GateXor.h src/GateAnd.cpp src/GateAnd.h src/GateOr.cpp src/GateOr.h src/ComparatorFactory.cpp src/ComparatorFactory.h src/GateNot.cpp src/GateNot.h src/Visitor.h src/NegateFirstBooleanVisitor.cpp src/NegateFirstBooleanVisitor.h)