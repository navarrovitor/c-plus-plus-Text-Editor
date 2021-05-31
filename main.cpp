#include "LinkedList.h"

#include <fstream>

int main()
{
  LinkedList linkedList;

  string file = "inteligenciaEmocional.txt";

  char character;

  fstream textFileIn(file);

  while (textFileIn >> noskipws >> character)
  {
    linkedList.insertAtTail(character);
  }
  textFileIn.close();

  fstream textFileOut(file, ios::out | ios::trunc);
  while (!linkedList.empty())
  {
    textFileOut.put(linkedList.removeHead());
  }

  textFileOut.close();
  return 0;
}
