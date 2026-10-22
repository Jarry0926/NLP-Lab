#if !defined(VITERBI_H)
#define VITERBI_H

#include <stdint.h>
#include <stdio.h>

struct Viterbi {
    uint32_t len;
    float* initProbs;
    float dp[][];
};

int
ViterbiInit(float* p_InitProbs, uint32_t p_Len);

int
ViterbiDestroy();

#endif // VITERBI_H

