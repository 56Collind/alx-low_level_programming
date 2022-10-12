#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores some info of a dog
 * @name: name of a dog
 * @age: age f a dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores it name, its age
 * and the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void intit_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
