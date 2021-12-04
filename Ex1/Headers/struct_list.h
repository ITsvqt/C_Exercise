#ifndef STRUCT_LIST_H
#define STRUCT_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node SNode;
typedef SNode *SPtrNode;

typedef struct List SList;
typedef SList *SPtrList;

struct Node
{
  char cData;
  int iLine;
  SPtrNode opNext;

};

struct List
{
  SPtrNode head;
};

SPtrList createList();

void add(SPtrList opList, char cValue, int iLine);

void removeAt(SPtrList opList, int iPosition);
int findValue(SPtrList opList, char cValue);

bool isEmpty(SPtrList opList);
void printList(SPtrList opList);
void freeListMemory(SPtrList opList);


#endif // STRUCT_LIST_H