all:
	gcc -shared add.c -o add.so
	cp add.so libadd.so
	go build -o a.out main.go
	./a.out
clean:
	rm *.so *.out
