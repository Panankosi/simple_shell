#ifndef ALIAS_H
#define ALIAS_H
#define MAX_ALIAS_NAME_LENGTH 100
#define MAX_ALIAS_VALUE_LENGTH 100
typedef struct ALIAS_T
{
	char name[MAX_ALIAS_NAME_LENGTH];
	char value[MAX_ALIAS_VALUE_LENGTH];
} Alias;
#endif /* ALIAS_H */
