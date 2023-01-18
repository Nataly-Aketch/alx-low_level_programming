#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typdef dog_t
 */
typedef struct dog_t dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
