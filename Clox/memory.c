//
//  memory.c
//  Clox
//
//  Created by Alex Restrepo on 6/12/19.
//  Copyright © 2019 arg. All rights reserved.
//

#include <stdlib.h>

#include "memory.h"

#include "common.h"

void *reallocate(void *previous, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        free(previous);
        return NULL;
    }

    return realloc(previous, newSize);
}
