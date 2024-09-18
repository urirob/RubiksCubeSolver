#include "RubiksCube.h"

class RubiksCube1dArray:public RubiksCube{
    private:

    static inline int getIndex(){}

    void rotateFace(int ind){}

    public:
    char cube[54]{};

    RubiksCube1dArray(){}

    COLOR getColor(){}

    bool isSolved() const override{}

    RubiksCube &u() override{}
    RubiksCube &uPrime() override{}
    RubiksCube &u2() override{}

    RubiksCube &l() override{}
    RubiksCube &lPrime() override{}
    RubiksCube &l2() override{}

    RubiksCube &f() override{}
    RubiksCube &fPrime() override{}
    RubiksCube &f2() override{}


    RubiksCube &r() override{}
    RubiksCube &rPrime() override{}
    RubiksCube &r2() override{}


    RubiksCube &b() override{}
    RubiksCube &bPrime() override{}
    RubiksCube &b2() override{}

    RubiksCube &d() override{}
    RubiksCube &dPrime() override{}
    RubiksCube &d2() override{}


    bool operator==(const RubiksCube1dArray &r1) const{}

    RubiksCube1dArray &operator=(const RubiksCube &r1){}

};

struct Hash1d{
    size_t operator()(const RubiksCube1dArray &r1) const{}  
};