#include "RubiksCube.h"

class RubiksCubeBitBoard:public RubiksCube{
    private:
    uint64_t solved_side_config[6]{};

    int arr[3][3]={{0,1,2},
    {7,8,3},
    {6,5,4}};

    uint64_t one_8=(1<<8)-1,one_24=(1<<24)-1;

    void rotateFace(int ind){}

    void rotateSide(){}

    //helper to getCorners()

    int get5bitCorner(){}

    //below function for testing printing

    // void print5bitbin(int a){
    //     for(int i=4;i>=0;i--){
    //         if(a&(1LL<<i))  cout<<1;
    //         else cout<<0;
    //     }
    // }


    public:

    uint64_t bitboard[6]{};

    RubiksCubeBitBoard(){

    }

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

    bool operator==(const RubiksCubeBitBoard &r1) const{}


    RubiksCubeBitBoard &operator=(const RubiksCubeBitBoard &r1){}

    uint64_t getCorners(){





    }

    //below for testing/printing

    


};

struct HashBitBoard{
    size_t operator()(const RubiksCubeBitBoard&r1)const{
        uint64_t final_hash=r1.bitboard[0];

        for(int i=1;i<6;i++)    final_hash^=r1.bitboard[i];
        return (size_t) final_hash;
    }

};