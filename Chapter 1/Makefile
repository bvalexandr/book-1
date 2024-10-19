CC=g++

all: format sol1 sol2 sol3 sol5 sol6 sol7 sol8 sol9 sol10 sol11 sol12

sol1:
	$(CC) sol1.cpp -o sol1.out

sol2:
	$(CC) sol2.cpp -o sol2.out

sol3:
	$(CC) sol3.cpp -o sol3.out

sol5:
	$(CC) sol5.cpp -o sol5.out

sol6:
	$(CC) sol6.cpp -o sol6.out

sol7:
	$(CC) sol7.cpp -o sol7.out

sol8:
	$(CC) sol8.cpp -o sol8.out

sol9:
	$(CC) sol9.cpp -o sol9.out

sol10:
	$(CC) sol10.cpp -o sol10.out

sol11:
	$(CC) sol11.cpp -o sol11.out

sol12:
	$(CC) sol12.cpp -o sol12.out

clean:
	rm -rf *.out

format:
	clang-format -i --style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' *.cpp

check:
	cppcheck --enable=all *.cpp