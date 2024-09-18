#include "RubiksCube.h"

class RubiksCube3dArray:public RubiksCube{
    private:

    void rotateFace(int ind){
        char temp_arr[3][3]={};

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp_arr[i][j]=cube[ind][i][j];
            }
        }


        for(int i=0;i<3;i++)    cube[ind][0][i]=temp_arr[2-i][0];
        for(int i=0;i<3;i++)    cube[ind][i][2]=temp_arr[0][i];
        for(int i=0;i<3;i++)    cube[ind][2][2-i]=temp_arr[i][2];
        for(int i=0;i<3;i++)    cube[ind][2-i][0]=temp_arr[2][2-i];
    }


    public:
    char cube[6][3][3]={};

    RubiksCube3dArray(){}

    COLOR getColor(FACE face,unsigned row,unsigned col) const override{}

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


    bool operator==(const RubiksCube3dArray &r1) const{}


    RubiksCube3dArray &operator=(const RubiksCube3dArray &r1){}


};

struct Hash3d{

};