//
// Created by Ed on 25/05/2015.
//

#ifndef STUDENT_NEWCPPCLASS_H
#define STUDENT_NEWCPPCLASS_H


class NewCppClass {
public:
    void setA(int a) {
        NewCppClass::a = a;
    }

    int getA() const {
        return a;
    }

    int a = 10;
public:
    virtual ~NewCppClass() { }

public:
    NewCppClass(int a) : a(a) { }
};


#endif //STUDENT_NEWCPPCLASS_H
