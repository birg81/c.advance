#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>

#define MAX_LEN 20

typedef struct {
	char* firstname;
	char* lastname;
	int age;
} Person;

// carica un lista di persone da un file di testo
Person** load(char*);
// salva la lista su un file di testo
void save(char*, Person**);
// stampa le info (su singola riga) di una specifica persona
void printPerson(Person*, FILE*);
// stampa in maniera tabellare le info di tutta la lista
void print(Person**);
// ordina la lista, in base al cognome, nome, ed età
void sort(Person**);
// accoda una nuova persona alla lista
int add(Person***, Person);
// modifica la persona i.ma della lista sostituendola con p
int modify(Person**, const int, Person);
// carica una lista di nomi e cognomi dai file
char** loadStr(char*, int*);
// elimina la lista di voci (nomi e cognomi), memorizzati nella lista dinamica
void eraseListStr(char**, int*);
// restituisce una nuova persona casuale partendo dai nomi e cognomi inseriti in un file ed impostando un'età casuale
Person* randPerson(char*, char*);
// restituisce una nuova persona sulla base delle info inserite da terminale dall'utente
Person* ansPerson();
// restituisce una nuova persona sulla base dei parametri inseriti
Person* newPerson(char*, char*, int);
// elimina la persona i.ma dalla lista e la restituisce, sposta nell'indice eliminato l'ultimo elemento della lista
Person* delete(Person**, const int);
// misura la lunghezza della lista, trovando il primo elemento che punta a NULL
int len(Person**);
// elimina una singola persona
void erasePerson(Person*);
// elimina tutta la lista
void erase(Person**);

#endif // PERSON_H