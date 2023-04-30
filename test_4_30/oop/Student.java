package test_4_30.oop;

public class Student {
    String name;

    public void sayHello(String name){
        System.out.println(name);   //蔡徐坤
        System.out.println(this.name); //王子异
        this.method();
    }

    public void method(){
        System.out.println(name);
        System.out.println("唱跳rap打篮球");
    }

    public void print(){
        System.out.println("print方法中打印this关键字--->"+this);
    }
}
