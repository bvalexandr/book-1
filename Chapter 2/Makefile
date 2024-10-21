CC=g++
CFLAGS=-Wall -Werror -Wextra

all: clean format check
	$(foreach file, $(wildcard *.cpp), $(CC) $(CFLAGS) $(file) -o $(patsubst %.cpp, %.out, $(file));)

clean:
	rm -rf *.out

format:
	clang-format -i --style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' *.cpp

check:
	cppcheck --enable=all *.cpp