package test_4_30.oop.constructor;

public class Student {
        String name;
        int age;

//构造方法
    public Student(String name, int age){
        /*
        过于死板：
        name = "蔡徐坤";
        age = 23;
        System.out.println("我是Student类的构造方法");
        */
        this.name = name;
        this.age = age;
    }
}
