all:
	go build -buildmode=c-shared -o sum.so sum.go
	gcc -Wall test.c sum.so
	rm *.h
	./a.out
