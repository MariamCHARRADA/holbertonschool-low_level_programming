#ifndef _dog_
#define _dog_
/**
  * struct dog - dog info
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * struct dog: gets the information of each dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
