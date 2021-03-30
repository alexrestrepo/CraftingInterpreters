//
//  memory.h
//  Clox
//
//  Created by Alex Restrepo on 6/12/19.
//  Copyright © 2019 arg. All rights reserved.
//

#ifndef memory_h
#define memory_h

#include "object.h"

#define ALLOCATE(type, count) \
    (type*)reallocate(NULL, 0, sizeof(type) * (count))

#define FREE(type, pointer) \
    reallocate(pointer, sizeof(type), 0)


#define CLOX_MIN_CAPACITY 8
#define GROW_CAPACITY(capacity) \
    ((capacity) < CLOX_MIN_CAPACITY ? CLOX_MIN_CAPACITY : (capacity) * 2)

#define GROW_ARRAY(previous, type, oldCount, count) \
    (type *)reallocate(previous, sizeof(type) * (oldCount), sizeof(type) * (count))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

#define GC_HEAP_GROW_FACTOR 2

void *reallocate(void *previous, size_t oldSize, size_t newSize);
void markObject(Obj* object);
void markValue(Value value);
void collectGarbage();
void freeObjects(void);

#endif /* memory_h */
