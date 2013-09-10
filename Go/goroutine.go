package main

import (
    "fmt"
    "time"
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
        {"H", 1},
        {"e", 2},
        {"l", 3},
        {"l", 4},
        {"o", 5},
        {",", 6},
        {" ", 7},
        {"W", 8},
        {"o", 9},
        {"r",10},
        {"l",11},
        {"d",12},
        {".",13},
        {"\n",14},
    }
    var sleeptime int
    for _, hello := range helloworld {
        go world(hello)
        sleeptime = hello.world + 1
    }

    time.Sleep(time.Duration(sleeptime + 1) * time.Second)

}
