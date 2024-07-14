#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdbool.h>



#define LENGTH 45


bool check(const char *word);
unsigned int hash(const char *word);
bool load(const char *dictionary);
unsigned int size(void);
bool unload(void);

#endif
