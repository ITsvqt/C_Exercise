#include "../Headers/struct_list.h"

static SPtrNode createNode(char cValue, int iLine);


SPtrList createList()
{
  SPtrList newList = (SPtrList)malloc(sizeof(SList));
  if(!newList)
  {
    fprintf(stderr, "ERROR: Not enough memory for List !\n");
    exit(EXIT_FAILURE);
  }

  newList->head = NULL;

  return newList;
}


bool isEmpty(SPtrList opList)
{
  return !opList->head; // if NULL return true
}

void add(SPtrList opList, char cValue, int iLine)
{
  SPtrNode newNode = createNode(cValue, iLine);

  if(isEmpty(opList))
  {
    opList->head = newNode;
  }
  else
  {
    newNode->opNext = opList->head;
    opList->head = newNode; 
  }

  printf("Added  %d. %c \n", iLine, cValue);
}

void removeAt(SPtrList opList, int iPosition)
{
  if(isEmpty(opList))
  {
    fprintf(stderr, "ERROR: Remove operation - list is empty !\n");
    exit(EXIT_FAILURE);
  }

  SPtrNode opTemp = opList->head;

  if(iPosition == 1)
  {
    opList->head = opList->head->opNext;
    free(opTemp);
  }
  else
  {
    for(int i = 1; i < iPosition - 1; i++)
    {
      opTemp = opTemp->opNext;
    }

    SPtrNode opRemoving = opTemp->opNext;
    opTemp->opNext = opTemp->opNext->opNext;

    free(opRemoving);
  }
}

int findValue(SPtrList opList, char cValue)
{
  SPtrNode head = opList->head;
  int iPosCounter = 1;

  while(head != NULL)
  {
    if(head->cData == cValue)
    {
      return iPosCounter;
    }

    head = head->opNext;
    iPosCounter++;
  }

  return -1;
}

void printList(SPtrList opList)
{
  SPtrNode head = opList->head;

  printf("List info:\n");
  while( head != NULL)
  {
    printf("Line : %d Char : %c\n", head->iLine, head->cData);
    head = head->opNext;
  }
}

void freeListMemory(SPtrList opList)
{
  SPtrNode temp = NULL;
  SPtrNode head = opList->head;

  while(head != NULL)
  {
    temp = head;
    head = head->opNext;

    free(temp);
  }

  free(opList);

  printf("SUCCESS: Freeing list memory .\n");
}


static SPtrNode createNode(char cValue, int iLine)
{
  SPtrNode newNode = (SPtrNode)malloc(sizeof(SNode));
  if(!newNode)
  {
    fprintf(stderr, "ERROR: Not enough memory for Node.\n");
    exit(EXIT_FAILURE);
  }

  newNode->cData = cValue;
  newNode->iLine = iLine;
  newNode->opNext = NULL;

  return newNode;
}