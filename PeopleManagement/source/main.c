#include <stdio.h>
#include "person.h"

int main() {
	// People list
	Person** plist = load("list/people.txt");
	sort(plist);

	// temp var
	int id;
	Person* p = NULL;

	// Choice variable
	int choice = -1;
	do {
		printf("\n1. ADD PEOPLE");
		printf("\n2. PRINT LIST");
		printf("\n3. MODIFY PEOPLE");
		printf("\n4. DELETE PEOPLE");
		printf("\n\n0. EXIT\n(insert choice): >_ ");
		scanf("%d", &choice);
		switch(choice) {
			case 1:		// ADD NEW PEOPLE TO LIST IN RANDOM MODE
				printf("\n**** ADD PEOPLE TO LIST (random) ****\n");
				p = randPerson("list/firstnames.txt", "list/lastnames.txt");
				// p = ansPerson();		// UN COMMENT FOR ASK DATA TO CLI
				if (add(&plist, *p) > 0) {
					printf(">> ADDING A NEW PERSON <<\n");
					printPerson(p, NULL);
				}
				sort(plist);
				break;
			case 2:		// PRINT LIST
				printf("\n**** PRINT PEOPLE LIST ****\n");
				print(plist);
				break;
			case 3:		// MODIFY PERSON / SORTING LIST
				printf("\n**** MODIFY PEOPLE LIST ****\n");
				printf("\nInsert a correct id: ");
				scanf("%d", &id);
				p = ansPerson();
				if (modify(plist, id, *p) > -1) {
					printf(">> PERSON MODIFIED <<\n");
					printPerson(p, NULL);
					sort(plist);
				}
				break;
			case 4:		// DELETE PERSON / SORTING LIST
				printf("\n**** DELETE PERSON ****\n");
				printf("\nInsert a correct id: ");
				scanf("%d", &id);
				p = delete(plist, id);
				if (p != NULL) {
					printf(">> DELETED PERSON <<\n");
					printPerson(p, NULL);
					erasePerson(p);
				}
				sort(plist);
				break;
			case 0:		// EXIT / SAVE / ERASE MEMORY
				printf("\n**** EXIT ****\nThanks for using this software...\n");
				save("list/people.txt", plist);
				erase(plist);
				return 0;
			default:	// invalid choice
				printf("\nInvalid choice, please try again..\n");
				break;
		}
	} while (choice != 0);
	return 0;
}