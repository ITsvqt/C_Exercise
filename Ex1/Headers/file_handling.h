#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H


#include <stdio.h>
#include <stdlib.h>

FILE *openFileForReading(char *strFilePath);
FILE *openFileForWriting(char *strFilePath);

void closeFile(FILE *pFile, char *strFilePath);

#endif //FILE_HANDLING_H