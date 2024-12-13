# python列表 可以存储多个元素
list_data = [1,2,3,4,5,6,7,8,9]
# 可以存储数字、字符串、数字和字符串

# 查找列表
# 列表中的元素存储是有序的 - 索引 从 0 开始
list_name = ["xyh","lzh","pxt"]
print(list_name[2])

# 修改列表
list_name[0] = "lhb"
print(list_name[0])

# 删除列表元素 pop() 方法
list_num = [1,2,3,4,5,6,7,8,9]
list_num.pop(1)
print(list_num)

# 列表的切片
# 切片就是获取列表中的某几个元素
# 取左不取右
list_data[0:3]
print(list_data[0:3])

# 列表的追加 append()
world_lsit = [1002,2006,2010,2014,2018]
world_lsit.append(2024)
print(world_lsit)

# 列表的插入 insert()
# 插入用于将指定对象插入列表的指定位置，这个位置的原来的元素会向后移动一位
world_lsit.insert(3,"sdsadad")
print(world_lsit)

# for 循环
food_list = [1,2,3,4,5,6,7,8,9]
for food in food_list:
    print(food)

dessert_lsit = ["hello","world","sadsd","232323"]
for des in dessert_lsit:
    print(f"哈哈哈哈哈哈{des}")

# 代码执行顺序
# 从上到下、从左到右

# 遍历

# range 整数列表
# range() 用于生成一系列连续整数
for i in range(6):
    print(i)
# range(a, b, c)
# a 计数从 a 开始
# b 计数到 b 结束
# c 步长
for j in range(1, 100, 2):
    print(j)

# 累加
total = 0
for i in range(101):
    total = total + i
print(total)

# 计数器
count = 0
for i in range(101):
    count = count + 1
print(f"总共累加了{count}次")