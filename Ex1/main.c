/*
Задача 1. Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ са
затворени ] ),}. Изпишете грешка при липса на затварящи скоби и реда на който са пропуснати.
*/

#include "Headers/main.h"

static void isLineTooLong(int iLength, int iLineCounter);

int main()
{
  
  SPtrList opList = createList();
  FILE *pFileIn = openFileForReading(INPUT_FILE);
  FILE *pFileOut = openFileForWriting(OUTPUT_FILE);

  char cCharecter = 0;
  int iLineCounter = 0;
  int iLineLength = 0;
  char strBuffer[LINE_MAX_LENGTH] = {0};
  int iElementIndex = 0;

  // Push opening brackets to stack.
  // When closing bracket occurs. Search through all opening and if it maches, remove it.
  // After the file is read. Everything in the list is unmatched opening brackets.
  //
  while(fgets(strBuffer, LINE_MAX_LENGTH, pFileIn))
  {
    iLineCounter++;
    iLineLength = strlen(strBuffer);

    isLineTooLong(iLineLength, iLineCounter);

    //foreach char in line
    for(int i = 0; i < iLineLength; i++)
    {
      cCharecter = strBuffer[i];

      if(cCharecter == '(' || cCharecter == '[' || cCharecter == '{')
      {
        add(opList, cCharecter, iLineCounter);
      }
      else if(cCharecter == ')' || cCharecter == ']' || cCharecter == '}')
      {
        if(isEmpty(opList))
        {
          continue;
        }
        if(cCharecter == ')')
        {
          cCharecter = '(';
        }
        else if(cCharecter == ']')
        {
          cCharecter = '[';
        }
        else
        {
          cCharecter = '{';
        }
        iElementIndex = findValue(opList, cCharecter);
        
        if(iElementIndex == -1)
        {
          continue;
        }

        removeAt(opList, iElementIndex);
      }
    }
  }
  printList(opList);

  SPtrNode head = opList->head;

  while(head != NULL)
  {
    fprintf(pFileOut, "Line %d : No closing bracket for %c\n", head->iLine, head->cData);
    head = head->opNext;
  }
  


  closeFile(pFileIn, INPUT_FILE);
  closeFile(pFileOut, OUTPUT_FILE);
  freeListMemory(opList);

  return 0;
}

static void isLineTooLong(int iLength, int iLineCounter)
{
  if(iLength >= LINE_MAX_LENGTH - 1)
    {
      fprintf(stderr, "ERROR: Line %d is exceeding line limit !\n", iLineCounter);
    }

}