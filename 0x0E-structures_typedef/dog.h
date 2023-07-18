#ifndef DOG_H
#define DOG_H
/**
 * struct dog -  contains different datatypes
 * @name: string
 * @age: age of the string
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_a;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
