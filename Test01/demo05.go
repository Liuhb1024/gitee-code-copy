package main

import "fmt"

/*
在编程中，最简单的算法就是变量交换了，一般常见方式就是定义中间变量
var a int = 100
var b int = 200
var t int
t = a
a = b
b = t
fmt.Println(a,b)
但是在Go语言中，就不用中间变量了，如下示例代码：
*/
func main1() {
	var a int = 100
	var b int = 200
	b, a = a, b
	fmt.Println(a, b)
}
