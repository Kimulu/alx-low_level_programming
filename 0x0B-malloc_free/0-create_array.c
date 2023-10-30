#include <stdlib.h>
/**
*create_array - function to create an array
*Return: returns pointer to array
*@size: size used to allocate memory
*@c: the charater to initialize
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
array[i] = c;
i++;
}
return (array);
}
