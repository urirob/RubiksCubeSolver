/*
creating a nibble array, which is storing 4-bit values using 8-bit integers

methods used in this array

1) intialize the array for particular size with particular value

2) get the value at particular position

3) set the given value at a particular position

*/

#ifndef RUBIKS_CUBE_SOLVER_NIBBLEARRAY_H
#define RUBIKS_CUBE_SOLVER_NIBBLEARRAY_H

#include <bits/stdc++.h>

using namespace std;

class NibbleArray{
    size_t size;
    vector<uint8_t>arr;

    public:
    NibbleArray(const size_t size,const uint8_t value=0xFF);

    //0xFF=255 in decimal

    uint8_t get(const size_t pos) const;

    void set(const size_t pos,const uint8_t val);

    unsigned char *data();

    const unsigned char *data() const;

    size_t storageSize() const;

    void inflate(vector<uint8_t>&des) const;
    

};

#endif