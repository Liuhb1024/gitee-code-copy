# 这是注释
print("hello world")

# 字符串
# 注意中英文符号
"单双引号都可以表示字符串"
print('She says,"Still waters run deep"')

# 整数（int）和浮点数（float）
print(3.14)
print(3)

# 变量 命名不能以数字开头
# python中的变量命名有一些风格，我们鼓励google的变量命名风格
# 即所有变量只使用小写字母和下划线，单词和单词之间用下划线连接。
name = "dk"
print(name)

# 四则运算 + - * /
print(10 / 2) # 浮点型

#计算双十一购买的商品需要付多少钱
# 单个商品价格分别保存在变量price1,price2,price3中，折
# 扣存储在变量discount中
# 1将单个商品价格相加计算出商品总价
# 2将商品总价*折扣计算出应付总金额，并将应付总金额赋值给
# 变量total
# 2.使用prints输出结果total
price1 = 286
price2 = 586
price3 = 243
dicount = 0.7
total = (price1 + price2 + price3) * dicount
print(total)

# 取余求商
# 取整运算符
print(10 // 3) # 3
# 取模运算符
print(10 % 3) # 1

# 字符串操作
print("I am" + "your father")
test_string_1 = "I am"
test_string_2 = test_string_1 + "your father"
print(test_string_2)

# 格式化输出
account = 6
print(f"您的账户余额{account}元")

# bool
xyh = True
lzh = False

# 逻辑运算
print(True and False) # 并且
print(True or False) # 或者
print(not False) # 非

# 简单判断
if True:
    print("True")

# 判断条件
if(5 > 3) and (True or False):
    print("I fuck you")

tom_age = None
if tom_age:
    print("tom is adult")

# 代码块

# if-else
my_age = 11
your_age = 16
if my_age > your_age:
    print("I am older")
else:
    print("I am younger")

# elif
today = "周二"
if today == "周一":
    print(f"{today}吃麦当当")
elif today == "周四":
    print(f"{today}吃KFC")
else:
    print(f"{today}随便吃吃~")
