#ifndef BAZ_LAB_1_ABSTRACTLOGIC_H
#define BAZ_LAB_1_ABSTRACTLOGIC_H

class Visitor;

class AbstractLogic {
public:
    virtual bool operation() = 0;
    virtual void accept(Visitor *visitor) = 0;

    virtual ~AbstractLogic() = default;
};


#endif //BAZ_LAB_1_ABSTRACTLOGIC_H
