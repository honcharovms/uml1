#ifndef __DOUBBLEDATA__
#define __DOUBBLEDATA__

#include "BaseData.h"

class DoubleData : public BaseData
{
private:
    double m_data;
public:
    DoubleData(double data = 0);
    ~DoubleData();
    void print();
    void set(double data);
    double get();
    void enter();
};

#endif
