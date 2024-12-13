//通过class定义了一个类，类名称叫做test_3_29
public class test_3_29 {
    public static void main(String[] args) {
        /*
        main方法，又称之为主方法
        这里是程序的入门，如果没有编写主方法，程序就不知道从哪里运行
         */
        //打印123
       System.out.println("123");
        System.out.println("大家好，我是练习时长两年半的coder，爱好是ctrl");
        //注释
        //在程序中指定位置添加的说明性信息，对代码的解释
        //单行注释   格式如下
        //
        //多行注释   格式如下
        /*
         */
        //文档注释   格式如下
        /**
         *
         */

        //关键字
        //被java赋予特定含义的英文单词class...

        //字面量（常量、字面值常量）
        //数据在程序中的书写格式
        System.out.println(182.6);
        System.out.println("蔡徐坤");
        //常用：整数、小数、字符串【加双引号】、字符【单引号，有且只有应该字符】、布尔值【true、false】、空值【null】
        System.out.println(true);
        System.out.println(false);//单独打印没啥意义
        System.out.println(10 > 20);//false - 表达式是会做运算的
        System.out.println("蔡徐坤");
        System.out.println(20);
        System.out.println("男");
        System.out.println("未婚");
        System.out.println("123");


       /*变量
        内存中的存储空间，空间中存储这经常发生改变的数据
        数据类型 变量名 = 数据值
        整数： int
        int salary = 15000;      定义一个变量
        double salary = 1.1;
       */
        int salary = 15000;//从右往左看，因为是将15000赋予给salary

        //使用变量：根据变量的名字使用

        System.out.println(salary);
        salary = 12000;
        System.out.println(salary);
        /*
        变量的注意事项：
        1.变量名不允许重复定义
        2.一条语句，可以定义出多个变量，中间需要逗号分隔
        3.变量使用之前，必须完成赋值
        4.TODO: 变量的作用域
        int a = 1, b = 2, c= 3;
        int num;
        System.out.println(num);
        */
        //Debug工具--调试工具，查看程序的执行流程，也可以追踪程序执行过程来调试程序
        //加断点

        //标识符
        //就是给类、方法、变量等起名字的符号
        /*
        标识符的规则
        由字母、数字、下划线_、美元符$
        不能以数字开头
        不能是关键字
        区分大小写
         */

        /*
        标识符的命名规范
        1.小驼峰命名法：变量
        规范1：标识符是一个单词时，全部小写
        范例1：name
        规范2：标识符由多个单词组成时，第二个单词开始，首字母大写
        范例2：firstName
        2.大驼峰命名法：类
        规范1：标识符是一个单词时，首字母大写
        范例1：Student
        规范2：标识符由多个单词组成时，每个单词首字母大写
        范例2：GoodStudent

         */
    }
}
