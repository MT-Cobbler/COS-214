#include <iostream>

using namespace std;

// Element Hieratchy
class Caller{
    public:
        Caller();
        ~Caller();
        void visit(HighIncome* f);
        void visit(MediumIncome* f);
        void visit(LowIncome* f);
};
//  Visitor Hierarchy
class Resident{

};

class HighIncome : public Resident{
    public:
        void accept(Caller* v);
        void incomeGroup();
};

class MediumIncome : public Resident{
    public:
        void accept(Caller* v);
        void incomeGroup();
};

class LowIncome : public Resident{
    public:
        void accept(Caller* v);
        void incomeGroup();
};