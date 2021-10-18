#ifndef NMS_H
#define NMS_H
using namespace std;
#include "Engineer.h"
#include "NetworkElement.h"

class NMS{
    public:
        NMS();
        virtual ~NMS();
        virtual void notify() = 0;
};
#endif