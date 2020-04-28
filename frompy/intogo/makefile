all:
	go build -buildmode=c-shared -o sum.so sum.go
	rm *.h
	python test.py
