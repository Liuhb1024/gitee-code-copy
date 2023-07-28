package main

import "fmt"

func main() {
	var x int
	var y float64
	/**
	定义了两个变量 想用键盘来录入这个两个变量
	fmt.Println() --> 打印并换行
	fmt.Printf()  --> 格式化输出
	fmt.Print()   --> 打印输出
	fmt.Scanln()  --> 接收输入
	fmt.Scanf()   --> 接受输入 格式化
	fmt.Scan()    --> 接受输入
	*/

	fmt.Println("请输入两个数：1.整数 2.浮点数")
	//变量取地址 & 变量
	fmt.Scanln(&x, &y)
	fmt.Println("x = ", x)
	fmt.Println("y = ", y)
}

func main3223() {
	/**
	首先了解一下二进制 0  1 逢2进1
	          1      1
	          2      10
	          3      11
	          4      100
	*/
	//位运算： 二进制上的 0 false 1 true
	// & ： 我和你 1 1 结果为 1
	// | ： 我或你 0 1 结果才为1
	//前提：A=60 ： 0011 1100
	//     B=13 ： 0000 1101
	//---------------------------
	// &：         0000 1100  我和你同时满足
	// |：         0011 1101  我或你 一个满足即可
	// ^:          0011 0001  不同为1 相同为0
	// &^:         0011 0000  位清空 对于b上的每个数值，如果为0，则取a对应位上的数值，如果为1，则取0.
	// >>：2
	// <<: 2

	var a uint = 60
	var b uint = 13
	//位运算
	var c uint = 0

	c = a & b
	//fmt.Println(c)
	fmt.Printf("%d,二进制%b", c, c) //12,二进制1100

	c = a | b
	fmt.Printf("%d,二进制%b", c, c) //61,二进制111101

	c = a ^ b
	fmt.Printf("%d,二进制%b", c, c) //49,二进制110001

	//A=60 ： 0011 1100
	c = a << 2
	fmt.Printf("%d,二进制%b", c, c) // 1111 0000
	a = 60
	c = a >> 2
	fmt.Printf("%d,二进制%b", c, c) // 0000 1111
}

func main323() {
	a := 5.0
	b := int(a)

	fmt.Printf("%T,%f\n", a, a)
	fmt.Printf("%T,%d\n", b, b)
}
func main34() {
	var str string
	str = "Hello,ikun"
	fmt.Printf("%T,%s\n", str, str)

	//单引号 字符， 整型-ASCLL字符码
	//拓展：
	//所有中国字的编码表：GBK
	//全世界编码表：Unicode编码表
	v1 := 'A'
	v2 := "A"
	fmt.Printf("%T,%d\n", v1, v1) //int32,65
	fmt.Printf("%T,%s\n", v2, v2)
	//编码表ASCLL

	//字符串连接 +
	fmt.Println("hello" + "world")
	//转义字符 \
	fmt.Println("hello\"666")
	fmt.Println("hello\n666") // \n换行
	fmt.Println("hello\t666") // \t制表符

}

func main24() {
	//定义一个整型
	var age int = 18
	fmt.Printf("%T,%d\n", age, age)

	//定义一个浮点型
	//默认6位小数
	var money float64 = 3.14
	fmt.Printf("%T,%f\n", money, money)
	fmt.Printf("%T,%.2f\n", money, money)
}
func main22() {
	//bool 默认值 false
	var b1 bool
	var b2 bool
	b1 = true
	b2 = false

	fmt.Println(b1, b2)
	fmt.Printf("%T,%T", b1, b2)
}

func main1111() {
	const (
		a = iota
		b
		c
		d = "haha"
		e
		f = 100
		g
		h = iota
		i
	)
}
func main111() {
	const (
		a = iota
		b = iota
		c = iota
	)
}

func main11() {
	const URL string = "www.baidu.com" //显式类型定义
	const URL2 = "www.baidu.com"       //隐式类型定义

	const a, b, c = 3.14, false, "ikun"

	fmt.Printf(URL)
	fmt.Printf(URL2)

}
