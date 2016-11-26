CC := gcc

FLAGS := -std=c99
FLAGS += -Wall

INC := -I ../
INC += -I ../ANSI/

LIB := -lm

FILES := ../Test.c


.PHONY: default
default: buildDirectory
	$(CC) $(FLAGS) main-Test_Test.c $(FILES) -o ./build/Test_Test $(INC) $(LIB)

.PHONY: run
run: default
	./build/Test_Test

buildDirectory:
	if [ ! -d "./build" ]; then mkdir build; fi
