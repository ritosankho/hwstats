CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -Wunused-parameter -Iinclude

SRC = src/main.c src/cpu.c
OBJ = $(SRC:src/%.c=build/%.o)

hwstats: $(OBJ)
	
	$(CC) $(OBJ) -o build/hwstats
build/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f build/*.o hwstats