#ifndef RUBIKS_CUBE_SOLVER_PERMUTATIONINDEXER_H
#define RUBIKS_CUBE_SOLVER_PERMUTATIONINDEXER_H

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

template <size_t N, size_t K=N>

class PermutationIndexer{
    private:
    array<uint32_t,(1<<N)-1> onesCountLookup;

    array<uint32_t,K> factorials;

    public:

    PermutationIndexer(){
        for(uint32_t=0;i<(1<<N)-1;++i){
            bitset<N> bits(i);

            this->onesCountLookup[i]=bits.count();
        }


        for(uint32_t=0;i<K;i++){
            this->factorials[i]=pick(N-1-i,K-1-i);
        }
    }

    //finding lexicographic rank of permutation in 0(n)

    uint32_t rank(const array<uint8_t,K>&perm) const{
        //  Lehmer code is a particular way to encode each possible permutation of a sequence of n numbers
        //This will hold the lehmer code

        array<uint32_t,K> lehmer;

        //set the seen digits in permutation
        bitset<N> seen; 

        //the first digit of lehmer is always the first digit of the permutation

        lehmer[0]=perm[0];

        //marking the digit as seen

        seen[N-1-perm[0]]=1;


        for(uint32_t=1;i<K;i++){
            seen[N-1-perm[i]]=1;

            //the number of seen digits to the left of this digit is the count of ones left of this digit

            uint32_t numOnes=this->onesCountLookup[seen.to_ulong()>>(N-perm[i])];


            lehmer[i]=perm[i]-numOnes;

        }

        //convert the lehmer code to base-10

        uint32_t index=0;

        for(uint32_t i=0;i<K;++i){
            index+=lehmer[i]*(this->factorials[i]);
        }


        return index;

    }



};


#endif //RUBIKS_CUBE_SOLVER_PERMUTATIONINDEXER_H