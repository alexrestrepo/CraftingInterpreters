//
//  debug.h
//  Clox
//
//  Created by Alex Restrepo on 6/12/19.
//  Copyright © 2019 arg. All rights reserved.
//

#ifndef debug_h
#define debug_h

#include "chunk.h"

void disassembleChunk(Chunk *chunk, const char *name);
int disassembleInstruction(Chunk *chunk, int offset);

#endif /* debug_h */
