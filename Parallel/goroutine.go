package main

import (
    "fmt"
    "time"
)

const (
	H int = iota
	E
	L
	O
	comma
	space
	W
	OO
	R
	LL
	D
	dot
	RET
	EOF
)

type Hello struct {
    hello string
    world int
}

func world(hello Hello) {
    time.Sleep(time.Duration(hello.world) * time.Second)
    fmt.Print(hello.hello)
}

func main() {
    helloworld := []Hello {
        {"H", H},
        {"e", E},
        {"l", L},
        {"l", L},
        {"o", O},
        {",", comma},
        {" ", space},
        {"W", W},
        {"o", OO},
        {"r", R},
        {"l", LL},
        {"d", D},
        {".", dot},
        {"\n", RET},
    }
    var sleeptime int
    for _, hello := range helloworld {
        go world(hello)
        sleeptime = EOF
    }

    time.Sleep(time.Duration(sleeptime + 1) * time.Second)

}
