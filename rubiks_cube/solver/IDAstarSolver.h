#include <bits/stdc++.h>
#include "../Model/RubiksCube.h"
#include "../PatternDatabase/CornerPatternDatabase.h"

#ifndef RUBIKS_CUBE_SOLVER_IDASTARSOLVER_H
#define RUBIKS_CUBE_SOLVER_IDASTARSOLVER_H

template<typename T,typename H>

class IDAstarSolver{
    private:
    CornerPatternDatabase cornerDB;
    vector<RubiksCube::MOVE> moves;
    unordered_map<T,RubiksCube::MOVE,H> move_done;
    unordered_map<T,bool,H> visited;

    struct Node{};

    struct compareCube{};

    void resetStructure{}


    //returns {solvedCube,bound}: if cube was solved
    //returns {rubiksCube,next_bound}, if the cube was not solved


    pair<T,int> IDAstar(int bound){}

    public:


    T rubiksCube;

    IDAstarSolver(T _rubiksCube,string fileName){
        rubiksCube=_rubiksCube;
        cornerDB.fromFile(fileName);
    }

    vector<RubiksCube:MOVE> solve(){}


};

#endif //RUBIKS_CUBE_SOLVER_IDASTARSOLVER_H