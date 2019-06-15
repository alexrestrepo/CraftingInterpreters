//
//  compiler.h
//  Clox
//
//  Created by Alex Restrepo on 6/13/19.
//  Copyright © 2019 arg. All rights reserved.
//

#ifndef compiler_h
#define compiler_h

#include "vm.h"

bool compile(const char *source, Chunk *chunk);

#endif /* compiler_h */
