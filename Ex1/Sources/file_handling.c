#include "../Headers/file_handling.h"

static void fileExists(char *strFilePath)
{
  FILE *pFile = fopen(strFilePath, "r");

  if(!pFile)
  {
    fprintf(stderr, "ERROR: Can't open file path \"%s\".\n", strFilePath);
    exit(EXIT_FAILURE);
  }

  printf("SUCCESS: Open file path \"%s\".\n", strFilePath);
}

FILE *openFileForReading(char *strFilePath)
{
  fileExists(strFilePath);

  FILE *pFile = fopen(strFilePath, "r");

  return pFile;
}

FILE *openFileForWriting(char *strFilePath)
{
  FILE *pFile = fopen(strFilePath, "w");

  return pFile;
}

void closeFile(FILE *pFile, char *strFilePath)
{
  if(fclose(pFile) == 0)
  {
    printf("SUCCESS: Closing file path \"%s\".\n", strFilePath);
  }
  else
  {
    fprintf(stderr, "ERROR: File %s did not close.\n", strFilePath);
  }
}
