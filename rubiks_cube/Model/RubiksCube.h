#ifndef RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H
#define RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H

#include <bits/stdc++.h>

using namespace std;

class RubiksCube{
    public:
    enum class FACE{
            UP,
            LEFT,
            FRONT,
            RIGHT,
            BACK,
            DOWN
    };
    enum class COLOR{
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum class MOVE{
        L,LPRIME,L2,
        R,RPRIME,R2,
        U,UPRIME,U2,
        D,DPRIME,D2,
        F,FPRIME,F2,
        B,BPRIME,B2,
    };

    /*
     * Returns the color of the cell at (row, col) in face.
     * If Rubik's Cube face is pointing at you, then the row numbering starts from the
     * top to bottom, and column numbering starts from the left to right.
     * The rows and columns are 0-indexed.
     * @param Face, row, and column index
     */

    virtual COLOR getColor(FACE face,unsigned row,unsigned col) const=0;


     /*
     * Returns the first letter of the given COLOR
     * Eg: For COLOR::GREEN, it returns 'G'
     */

    static char getColorLetter(COLOR color);

    /*
     * Returns true if the Rubik Cube is solved, otherwise returns false.
     */

    virtual bool isSolved() const=0;

     /*
     * Returns the move in the string format.
     */



    static string getMove(MOVE ind);



    void print() const;


      /*
     * Randomly shuffle the cube with 'times' moves and returns the moves performed.
     */
    vector<MOVE> randomShuffleCube(unsigned int times);


    /*
     * Perform moves on the Rubik Cube
     */
    RubiksCube &move(MOVE ind);



    /*
     * Invert a move
     */
    RubiksCube &invert(MOVE ind);


    /*
     * Rotational Moves on the Rubik Cubes
     *
     * F, F’, F2,
     * U, U’, U2,
     * L, L’, L2,
     * D, D’, D2,
     * R, R’, R2,
     * B, B’, B2
     */
    virtual RubiksCube &f() = 0;

    virtual RubiksCube &fPrime() = 0;

    virtual RubiksCube &f2() = 0;

    virtual RubiksCube &u() = 0;

    virtual RubiksCube &uPrime() = 0;

    virtual RubiksCube &u2() = 0;

    virtual RubiksCube &l() = 0;

    virtual RubiksCube &lPrime() = 0;

    virtual RubiksCube &l2() = 0;

    virtual RubiksCube &r() = 0;

    virtual RubiksCube &d() = 0;

    virtual RubiksCube &dPrime() = 0;

    virtual RubiksCube &d2() = 0;

    virtual RubiksCube &rPrime() = 0;

    virtual RubiksCube &r2() = 0;

    virtual RubiksCube &b() = 0;

    virtual RubiksCube &bPrime() = 0;

    virtual RubiksCube &b2() = 0;


    

};

#endif //RUBIKS_CUBE_SOLVER_RUBIKSCUBE_H