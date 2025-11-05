#include <iostream>
#include "string_functions.h"

int strlength (std::string input_string)
{
  int length = 0;

  for (int i = 0; input_string[i] != '\0'; i++)
  {
    length++;
  }
  
  return length;
}

bool is_uppercase(char input_char)
{
  if (input_char >= 'A' && input_char <= 'Z')
  {
    return true;
  }
  return false;
}

std::string capitialize (std::string input_string)
{

  for (int i = 0; i < length(input_string); i++)
  {
    if(!is_uppercase){
      input_string[i] -= 32;
    } 
  }
  
  return input_string;
}
