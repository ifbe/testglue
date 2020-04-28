package main

// #cgo CFLAGS: -I.
// #cgo LDFLAGS: -L. -ladd
// int add(int,int);
import "C"
import "fmt"

func main() {
    fmt.Println(C.add(1,2))
}

