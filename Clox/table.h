//
//  table.h
//  Clox
//
//  Created by Alex Restrepo on 6/20/19.
//  Copyright © 2019 arg. All rights reserved.
//

#ifndef table_h
#define table_h

#include "common.h"
#include "value.h"

typedef struct {
    ObjString *key;
    Value value;
} Entry;

typedef struct {
    int count;      // used
    int capacity;   // allocated
    Entry *entries;
} Table;

void initTable(Table *table);
void freeTable(Table *table);
bool tableGet(Table *table, ObjString *key, Value *value);
bool tableSet(Table *table, ObjString *key, Value value);
bool tableDelete(Table *table, ObjString *key);
void tableAddAll(Table *from, Table *to);
ObjString *tableFindString(Table *table, const char *chars, int length, uint32_t hash);

#endif /* table_h */
