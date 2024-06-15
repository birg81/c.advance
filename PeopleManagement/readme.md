[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)

<a name="TOP"></a>

<a href="#IT"><img style="height:25px" src="https://em-content.zobj.net/thumbs/60/whatsapp/352/flag-italy_1f1ee-1f1f9.png" /></a>
🤍
<a href="#EN"><img style="height:25px" src="https://em-content.zobj.net/thumbs/60/whatsapp/352/flag-united-kingdom_1f1ec-1f1e7.png" /></a>

<hr />


![🇬🇧](https://em-content.zobj.net/thumbs/60/whatsapp/352/flag-united-kingdom_1f1ec-1f1e7.png) <a name="EN"></a>
# 📋 People List Management

This project implements a C program to manage a list of people. It aims to demonstrate how to handle dynamic structures in C and how to manage their persistence using text files. The functionalities include:

- 📂 Loading a list of people from a text file.
- 💾 Saving the list of people to a text file.
- ➕ Adding a new person to the list.
- ✏️ Modifying the details of an existing person.
- 🗑️ Deleting a person from the list.
- 📋 Displaying the list of people in a tabular format.
- 🗂️ Sorting the list by last name, first name, and age.
- 🎲 Generating a random person from files of first names and last names.

It manages a complete set of **CRUD** operations, (*create*, *read*, *update*, and *delete* people).

## 🗂️ Folder Structure

The project folder structure is as follows:

```
project/
├── Makefile
├── source/
│   ├── main.c
│   ├── person.c
├── list/
│   ├── firstnamelist.txt
│   ├── lastnamelist.txt
│   └── people.txt
├── include/
│   └── person.h
└── obj/
```

- `source/`: contains the project's source files (`main.c` and `person.c`).
- `list/`: contains the input files (`firstnamelist.txt`, `lastnamelist.txt`, `people.txt`).
- `include/`: contains the header file (`person.h`).
- `obj/`: contains the object files generated during compilation.
- `Makefile`: configuration file for building and managing the project.

## 🛠️ Using the Makefile

### 🏗️ Building the Program

To build the program, open the terminal in the project directory and run:

```sh
make
```

This command will compile the source files and create the executable.

### 🧹 Cleaning Compiled Files

To clean up the generated object files and executable, run:

```sh
make clean
```

This command will remove the object files and the executable.

### ▶️ Running the Program

To run the program, execute:

```sh
make run
```

This command compiles the program (if necessary) and runs the executable.

### 💡 Using the Program

Once the program is running, you will see a menu with several options:

1. **➕ ADD PEOPLE**: Adds a random person to the list.
2. **📋 PRINT LIST**: Prints the list of people in a tabular format.
3. **✏️ MODIFY PEOPLE**: Modifies the details of an existing person in the list.
4. **🗑️ DELETE PEOPLE**: Deletes a person from the list.
0. **🚪 EXIT**: Saves the updated list and exits the program.

If you choose option 1, a random person will be generated using the files `firstnamelist.txt` and `lastnamelist.txt` in the `list/` folder. The updated list will be saved to `list/people.txt` when the program exits.

## 🔍 Notes

- Ensure that the files `firstnamelist.txt`, `lastnamelist.txt`, and `people.txt` are present in the `list/` folder before running the program.
- The program requires the standard C libraries (`stdio.h`, `stdlib.h`, `string.h`, `time.h`) to be available.

Enjoy using the program! 🚀


<hr/>

<a href="#IT"><img style="height:25px" src="https://em-content.zobj.net/thumbs/60/whatsapp/352/flag-italy_1f1ee-1f1f9.png" /></a> 🤍 <a href="#EN"><img style="height:25px" src="https://em-content.zobj.net/thumbs/60/whatsapp/352/flag-united-kingdom_1f1ec-1f1e7.png" /></a>

<hr />


![🇮🇹](https://em-content.zobj.net/thumbs/60/whatsapp/352/flag-italy_1f1ee-1f1f9.png) <a name="IT"></A>
# 📋 Gestione di una Lista di Persone

Questo progetto implementa un programma in C per gestire una lista di persone.
Ha lo scopo di mostrare come gestire strutture dinamiche in C e come gestirne la persistenza mediante file di testo.
Le funzionalità includono:

- 📂 Caricare una lista di persone da un file di testo.
- 💾 Salvare la lista di persone in un file di testo.
- ➕ Aggiungere una nuova persona alla lista.
- ✏️ Modificare i dettagli di una persona esistente.
- 🗑️ Eliminare una persona dalla lista.
- 📋 Visualizzare la lista di persone in formato tabellare.
- 🗂️ Ordinare la lista in base al cognome, nome ed età.
- 🎲 Generare una persona casuale a partire da file di nomi e cognomi.

Quindi gestisce un set di operazioni **CRUD** complete, (*inserimento*, *lettura*, *modifica* e *cancellazione* di persone)

## 🗂️ Struttura delle Cartelle

La struttura delle cartelle del progetto è la seguente:

```
project/
├── Makefile
├── source/
│   ├── main.c
│   ├── person.c
├── list/
│   ├── firstnamelist.txt
│   ├── lastnamelist.txt
│   └── people.txt
├── include/
│   └── person.h
└── obj/
```

- `source/`: contiene i file sorgente del progetto (`main.c` e `person.c`).
- `list/`: contiene i file di input (`firstnamelist.txt`, `lastnamelist.txt`, `people.txt`).
- `include/`: contiene i file header (`person.h`).
- `obj/`: contiene i file oggetto generati durante la compilazione.
- `Makefile`: file di configurazione per la compilazione e gestione del progetto.

## 🛠️ Uso del Makefile

### 🏗️ Compilazione del Programma

Per compilare il programma, apri il terminale nella directory del progetto e esegui:

```sh
make
```

Questo comando compilerà i file sorgente e creerà l'eseguibile.

### 🧹 Pulizia dei File Compilati

Per pulire i file oggetto e l'eseguibile generati, esegui:

```sh
make clean
```

Questo comando rimuoverà i file oggetto e l'eseguibile.

### ▶️ Esecuzione del Programma

Per eseguire il programma, esegui:

```sh
make run
```

Questo comando compila il programma (se necessario) ed esegue l'eseguibile.

### 💡 Uso del Programma

Una volta eseguito il programma, vedrai un menu con diverse opzioni:

1. **➕ ADD PEOPLE**: Aggiunge una persona casuale alla lista.
2. **📋 PRINT LIST**: Stampa la lista di persone in formato tabellare.
3. **✏️ MODIFY PEOPLE**: Modifica i dettagli di una persona esistente nella lista.
4. **🗑️ DELETE PEOPLE**: Elimina una persona dalla lista.
0. **🚪 EXIT**: Salva la lista aggiornata e termina il programma.

Se scegli l'opzione 1, una persona casuale sarà generata usando i file `firstnamelist.txt` e `lastnamelist.txt` nella cartella `list/`.
La lista aggiornata sarà salvata in `list/people.txt` al termine del programma.

## 🔍 Note

- Assicurati che i file `firstnamelist.txt`, `lastnamelist.txt`, e `people.txt` siano presenti nella cartella `list/` prima di eseguire il programma.
- Il programma richiede che le librerie standard di C (`stdio.h`, `stdlib.h`, `string.h`, `time.h`) siano disponibili.

Buon utilizzo del programma! 🚀

<a href="#TOP">&utrif; top &utrif;</a>

## 🔗 Links
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/biagio-rosario-greco-77145774/)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/birg_81)