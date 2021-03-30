//
//  compiler.h
//  Clox
//
//  Created by Alex Restrepo on 6/13/19.
//  Copyright © 2019 arg. All rights reserved.
//

#ifndef compiler_h
#define compiler_h

#include "object.h"
#include "vm.h"

ObjFunction *compile(const char *source);
void markCompilerRoots();

#endif /* compiler_h */
