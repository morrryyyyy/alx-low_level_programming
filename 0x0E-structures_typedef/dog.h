#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a new struct for a dog's details
 * @name: the name of the dog
 * @owner: the name of the owner of the dog
 * @age: the dog's age
 *
 *Description: This data type defines a dog with a few details
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_*/
