package test_4_29.oop;

/*
1.创建对象的格式

    类名 对象名 = new 类名();

2.使用对象成员变量的格式

    对象名.成员变量;

3.使用对象成员方法的格式

    对象名.成员方法();
 */

/*
细节：
        1.打印对象名，可以看到对象的内存地址

               test_4_29.oop.Student@14ae5a5
               全类名 ： 包名 + 类名

        2.成员变量就算没有赋值，也可以直接用，使用的是对象的默认值
 */
public class StudentTest {
    public static void main(String[] args) {
        Student stu1 = new Student();

        stu1.name = "蔡徐坤";
        stu1.age = 24;
        System.out.println(stu1);
        System.out.println(stu1.name);
        System.out.println(stu1.age);

        stu1.study();
        stu1.eat();
        System.out.println("-------------------");

        Student stu2 = new Student();

        stu2.name = "王子异";
        stu2.age = 23;
        System.out.println(stu2.name);
        System.out.println(stu2.age);

        stu2.study();
        stu2.eat();
    }
}
