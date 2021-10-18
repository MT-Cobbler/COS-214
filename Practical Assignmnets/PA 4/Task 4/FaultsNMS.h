#ifndef FAULTSNMS_H
#define FAULTSNMS_H
#include <list>
using namespace std;
#include "NMS.h"
class FaultsNMS : public NMS
{
private:
    list<Engineer*> colleagueList;
public:
    FaultsNMS(/* args */);
    ~FaultsNMS();
    void notify(Engineer* e);
    Engineer* createEnigneer(Engineer* );
};
#endif
