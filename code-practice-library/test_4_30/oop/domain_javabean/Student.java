package test_4_30.oop.domain_javabean;
//Javabean

public class Student {
    //1.成员变量私有化
    private int age;
    private String name;

    //2.空参，带参构造方法
    public Student(){

    }

    public Student(String name, int age){
        this.name = name;
        this.age = age;
    }

    //3.对于私有的成员变量，提供对应的getXxx和setXxx方法
    public void setName(String name){
        this.name = name;
    }

    public String getName(){
        return name;
    }

    public void setAge(String name){
        this.age = age;
    }

    public int getAge(){
        return age;
    }

}
