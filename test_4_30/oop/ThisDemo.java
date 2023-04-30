package test_4_30.oop;

/*
public class ThisDemo {
    public static void main(String[] args) {
        Student stu = new Student();
        stu.name = "蔡徐坤";
        stu.sayHello("王子异");
        //打印结果：王子异
        //原因是：当局部变量和成员变量出现了重名的情况 Java 使用的是 就近原则
    }
}
*/

//这种情况下，非要使用成员变量该怎么办？
//使用this关键字
//使用this关键字的话：Student.java
//this关键字可以区分局部变量和成员变量的重名问题
/*
this关键字的作用:
      this可以调用本类成员(变量,方法)

         this.本类成员变量
         this.本类成员方法();

         this. 的省略规则：

              本类成员方法： 没有前提条件，this.可以直接省略
              本类成员变量： 方法中没有出现重名的变量，this.才可以省略

              --------------------------------------------

              this介绍：代表当前类对象的引用(地址)
                        ---谁来调用我，我就代表谁
                        ---哪一个对象调用方法，方法中的this，代表的就是哪一个对象

                        stu1.print()----->this----->stu1的地址
                        stu2.print()----->this----->stu2的地址

 */
public class ThisDemo {
    public static void main(String[] args) {
        Student stu = new Student();
        stu.name = "蔡徐坤";
        stu.sayHello("王子异");
        System.out.println("--------------------------");

        Student stu1 = new Student();
        System.out.println(stu1);
        stu1.print();

        Student stu2 = new Student();
        System.out.println(stu2);
        stu2.print();



    }
}
