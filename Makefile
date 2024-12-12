BUILD=sirius

all:
	g++ main.cpp -o $BUILD

rebuild: clean all

run:
	./$BUILD

clean:
	rm $BUILD