# Nome dell'eseguibile
TARGET = peopleManagement

# Directory per i file sorgente, header e liste
SRC_DIR = source
OBJ_DIR = obj
INCLUDE_DIR = include
LIST_DIR = list

# File sorgente
SRC_FILES = $(SRC_DIR)/main.c $(SRC_DIR)/person.c

# File oggetto (saranno creati nella directory obj)
OBJ_FILES = $(OBJ_DIR)/main.o $(OBJ_DIR)/person.o

# Compilatore e flag
CC = gcc
CFLAGS = -I$(INCLUDE_DIR) -Wall -Wextra -std=c99

# Regola per creare l'eseguibile
$(TARGET): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(TARGET)

# Regola per compilare main.c
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c $(INCLUDE_DIR)/person.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o

# Regola per compilare person.c
$(OBJ_DIR)/person.o: $(SRC_DIR)/person.c $(INCLUDE_DIR)/person.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/person.c -o $(OBJ_DIR)/person.o

# Regola per pulire i file compilati
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Regola per eseguire il programma
run: $(TARGET)
	./$(TARGET)

# Regola di default
.PHONY: all
all: $(TARGET)