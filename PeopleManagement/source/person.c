#include "person.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

Person** load(char* fname) {
	FILE* f = fopen(fname, "r");
	if(!f) return NULL;
	Person** people = malloc(sizeof(Person*));
	int size;
	char firstname[MAX_LEN];
	char lastname[MAX_LEN];
	int age;
	for(size = 0; fscanf(f, "%s %s %d", firstname, lastname, &age) == 3; size++) {
		people = realloc(people, (size + 2) * sizeof(Person*));
		people[size] = newPerson(firstname, lastname, age);
	}
	people[size] = NULL;
	fclose(f);
	return people;
}
void save(char* fname, Person** people) {
	FILE* f = fopen(fname, "w");
	if(f) {
		for (int i = 0; people[i] != NULL; i++) {
			printPerson(people[i], f);
		}
		fclose(f);
	}
}
void printPerson(Person* p, FILE* f) {
	if(!f) f = stdout;
	if(p) {
		fprintf(f, "%19s\t%-19s\t%2d\n", p->firstname, p->lastname, p->age);
	}
}
void print(Person** people) {
	for (int i = 0; people[i] != NULL; i++) {
		printf("[%2d]\t", i);
		printPerson(people[i], NULL);
	}
}
void sort(Person** people) {
	int n = len(people);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (
				strcmp(people[i]->lastname, people[j]->lastname) > 0 || (
					strcmp(people[i]->lastname, people[j]->lastname) == 0 &&
					strcmp(people[i]->firstname, people[j]->firstname) > 0
				) || (
					strcmp(people[i]->lastname, people[j]->lastname) == 0 &&
					strcmp(people[i]->firstname, people[j]->firstname) == 0 &&
					people[i]->age > people[j]->age
				)
			) {
				Person* t = people[i];
				people[i] = people[j];
				people[j] = t;
			}
		}
	}
}
int add(Person*** people, Person p) {
	int size = len(*people);
	*people = realloc(*people, (size + 2) * sizeof(Person*));
	if (*people == NULL) return 0;
	(*people)[size] = newPerson(p.firstname, p.lastname, p.age);
	(*people)[size + 1] = NULL;
	return 1;
}
int modify(Person** people, const int id, Person p) {
	int size = len(people);
	if (id < 0 || id >= size) return -1;
	erasePerson(people[id]);
	people[id] = newPerson(p.firstname, p.lastname, p.age);
	return 0;
}
char** loadStr(char* fname, int* size) {
	FILE* f = fopen(fname, "r");
	if(!f) return NULL;
	char line[MAX_LEN];
	char** lines = NULL;
	for(*size = 0; f != NULL && fscanf(f, "%s", line) == 1; (*size)++) {
		lines = realloc(lines, (*size + 1) * sizeof(char*));
		lines[*size] = malloc(strlen(line) + 1);
		strcpy(lines[*size], line);
	}
	fclose(f);
	return lines;
}
void eraseListStr(char** list, int* size) {
	for(; *size >= 0; (*size)--) {
		free(list[*size -1]);
	}
	free(list);
}
Person* randPerson(char* firstnameFnameLst, char* lastnameFnameLst) {
	srand(time(NULL));
	int f_size = 0;
	int l_size = 0;
	char** firstnames = loadStr(firstnameFnameLst, &f_size);
	char** lastnames = loadStr(lastnameFnameLst, &l_size);
	char* firstname = firstnames[rand() % f_size];
	char* lastname = lastnames[rand() % l_size];
	int age = 15 + rand() % 36; // random between 15 and 50 years old
	Person* p = newPerson(firstname, lastname, age);
	eraseListStr(firstnames, &f_size);
	eraseListStr(lastnames, &l_size);
	return p;
}
Person* ansPerson() {
	char firstname[MAX_LEN];
	char lastname[MAX_LEN];
	int age;
	printf("Insert firstname: ");
	scanf("%s", firstname);
	printf("Insert lastname: ");
	scanf("%s", lastname);
	printf("Insert age: ");
	scanf("%d", &age);
	return newPerson(firstname, lastname, age);
}
Person* newPerson(char* firstname, char* lastname, int age) {
	Person* p = malloc(sizeof(Person));
	p->firstname = strdup(firstname);
	p->lastname = strdup(lastname);
	p->age = age;
	return p;
}
Person* delete(Person** people, const int id) {
	int size = len(people);
	if (id < 0 || id >= size) return NULL;
	Person* p = people[id];
	people[id] = people[size - 1];
	people[size - 1] = NULL;
	return p;
}
int len(Person** people) {
	int count = 0;
	for(; people[count] != NULL; count++);
	return count;
}
void erasePerson(Person* p) {
	if(p) {
		free(p->firstname);
		free(p->lastname);
		free(p);
	}
}
void erase(Person** people) {
	for (int i = 0; people[i] != NULL; i++) {
		erasePerson(people[i]);
	}
	free(people);
}