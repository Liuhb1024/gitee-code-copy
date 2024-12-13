#print练习
print('hello world!')
print("we're going to do sth!")
print("I like tying this.")
print("This is fun.")
print('Yay! Printing!')
print("I'd much rather you 'not'.")
print('I "said" do not touch this.')

# "#" -> octochorpe or pound character

#数字与数学运算
print("I will now count my chicken:")
print("Hens", 25 + 30 / 6)
print("Roosters", 100 - 25 * 3 % 4)
print("Now I will count the eggs:")
print(3 + 2 + 1 - 5 + 4 % 2 - 1 / 4 + 6)
print("Is it true that 3 + 2 < 5 - 7?")
print(3 + 2 < 5 - 7)
print("What is 3 + 2 ?", 3 + 2)
print("What is 5 - 7 ?", 5 - 7)
print("Oh, that's why it's False.")
print("How about some more")
print("Is it greater?", 5 > -2)
print("Is it greater or equal?", 5 >= 2)
print("Is it less or equal?", 5 <= 2)
#运算符的优先级：可以用PEMDAS辅助记忆，其意思为：P:parenthness括号/E：Exponents指数/M:Multiplication乘法/D：Division除法/
# A：Addition加法/S:Subtraction减法/
#PE(M&D)(A&S)

#变量和命名
cars = 100
space_in_a_car = 4.0
drivers = 30
passengers = 90
cars_not_driven = cars - drivers
cars_driven = drivers
carpool_capacity = cars_driven * space_in_a_car
average_passengers_per_car = passengers / cars_driven

print("There are", cars, "cars available.")
print("There are only", drivers, "drivers available.")
print("There will be", cars_not_driven,"empty cars today.")
print("We can transport", carpool_capacity,"people today.")
print("We have", passengers,"to carpool today")
print("We need to put about", average_passengers_per_car,"in each car.")

#常见问题回答
#同c语言一样，单等号（=）意为赋值，双等号（==）意为等号两边是否相等

#更多的变量和打印

my_name = 'Zed A. Shaw'
my_age = 35 # not a lie
my_height = 74 # inches
my_weight = 180 # lbs
my_eyes = 'Blue'
my_teeth = 'White'
my_hair = 'Brown'

print(f"Let's talk about {my_name}")
print(f"He's {my_height} inches tall")
print(f"He's {my_weight} pounds heavy")
print("Actually that's not too heavy")
print(f"He's got {my_eyes} eyes and {my_hair} hair")
print(f"His teech are usually{my_teeth}depending on the coffee")

#this line is trickly,try ti get it exactly right
total = my_age + my_height + my_weight
print(f"If I add {my_age}, {my_height}, and {my_weight} I get {total}.")

#常见问题回答
#如何将浮点数四舍五入
#可以使用round函数，例如：round（1.7886）
round(1.7333)
