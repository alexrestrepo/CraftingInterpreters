//
//  value.h
//  Clox
//
//  Created by Alex Restrepo on 6/12/19.
//  Copyright © 2019 arg. All rights reserved.
//

#ifndef value_h
#define value_h

#include "common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value *values;
} ValueArray;

void initValueArray(ValueArray *array);
void writeValueArray(ValueArray *array, Value value);
void freeValueArray(ValueArray *array);
void printValue(Value value);

#endif /* value_h */
