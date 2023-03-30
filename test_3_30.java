import com.sun.org.apache.xpath.internal.objects.XString;

import java.util.Scanner;
public class test_3_30 {
    public static void main(String[] args) {
        /*
        数据类型
        1.基本数据类型（内存占用）
        整数：
            byte（1）【-128~127】、short（2）、int（4）、long（8）
        浮点数：
            float（4）【单精度】、double（8）【双精度】
        字符：
            char（2）
        布尔：
            boolean（1）
        TODO:2.引用数据类型

        ---------------------------------------------------------------------
        使用思路：
        1.整数类型：首选用int，如果发现int用不了，换成long，定义long类型需要加入L标识

        2.小数类型：首选用double，非要用float，需要加入F标识
         */
        long tel = 156666666666666666L;
        float heigh = 5.5F;
        char gender1 = '男';
        boolean fla = true;
        //姓名
        String name1 = "蔡徐坤";
        //年龄
        int age1 = 18;
        //身高
        double heiget1 = 180.00;
        //是否单身
        boolean flag1 = true;
        System.out.println(name1);
        System.out.println(age1);
        System.out.println(gender1);
        System.out.println(heiget1);
        System.out.println("是否单身：");
        System.out.println(flag1);
        /*
        默认整数int、默认浮点数double
        编码表，ASCLL码表-->计算机中字节到字符的一套对应关系
        a--->字节--->二进制--->01100001--->十进制--->97
         */
        char c1 = 97;
        System.out.println(c1);//结果为：a
        /*
        Scanner键盘录入
        效果介绍：类似于c语言中的scanf
        键盘录入的三个步骤
        1.让自己的java程序找到Scanner符咒
        import java.until.Scanner写在public class test_3_30前
        2.召唤
        Scanner sc = new Scanner(System.in);//先背下来   sc时变量名
        3.指挥
        sc.nextInt();//从控制台接受整数
        int age = sc.nextInt();
        System.out.println(age);
        -------------------------
        代码样例：
        int age = sc.nextInt();
        从键盘录入整数，并使用int类型变量接受
        double height = sc.nextDouble();
        从键盘录入小数，并使用double类型变量接受
        boolean flag = sc.nextBoolean();
        从键盘录入布尔，并使用boolean类型变量接受
        String name = sc.next();
        从键盘录入字符串，并使用String类型变量接受

         */
//        Scanner sc1 = new Scanner(System.in);
//        sc1.nextInt();
//        int ikun = sc1.nextInt();
//        System.out.println(ikun);
      //  -----------------------------------
//        //案例：Scanner模拟注册功能
//        //1.召唤Scanner
//        Scanner sc = new Scanner(System.in);
//        //2.键盘输入姓名
//        System.out.println("请输入你的姓名");
//        String name = sc.next();
//        //3.键盘录入年龄
//        System.out.println("请输入你的年龄");
//        int age = sc.nextInt();
//        //4.键盘录入性别
//        System.out.println("请输入你的性别");
//        String gender = sc.next();
//        //5.键盘输入身高
//        System.out.println("请输入你的身高");
//        double height = sc.nextDouble();
//        //6.键盘输入婚姻状况
//        System.out.println("请输入你的婚姻状况");
//        boolean flag = sc.nextBoolean();
//
//        System.out.println("注册成功！");
//        System.out.println(name);
//        System.out.println(age);
//        System.out.println(gender);
//        System.out.println(height);
//        System.out.println(flag);


        /*
        运算符：对字面量或者变量进行操作的符号
        表达式：用运算符吧字面量或者变量连接起来符合java语法的式子就可以称为表达式
               不同运算符连接的表达式体现的是不同类型的表达式
        1.算术运算符
        +、-、*、/、%
        /：
           整数相除，结果只能得到整数，若是想得到小数，那就需要小数参与运算、
        %（取余（模））：
            作用是用来取余数的
            场景：奇偶数的判断、算法、哈希表结构

        2.
         */
//案例：输入三位数，将个十百位拆分打印在控制台
        /*
        公式总结：
        个位：数值 % 10
        十位：数值 / 10 % 10
        百位：数值 / 10 / 10% 10
        千位：数值 / 10 / 10 / 10% 10
         */
//        System.out.println("请输入一个三位数");
//        //召唤Scanner
//        Scanner sb = new Scanner(System.in);
//        //指挥Scanner，从键盘录入一个整数
//        int i = sb.nextInt();
//        //数字拆分
//        int a = i % 10;
//        int b = i / 10 % 10;
//        int c = i / 10 / 10 % 10;
//        System.out.println("个位是");
//        System.out.println(a);
//        System.out.println("十位是");
//        System.out.println(b);
//        System.out.println("百位是");
//        System.out.println(c);


        /*
        字符串的拼接操作
                     当 + 操作中，遇到了字符串，这时+就是字符串连接符，而不是算术运算符
        System.out.println("年龄为："+23+1);---->年龄为：231
         */
        //那么我们可以对上面的案例进行拼接操作
        System.out.println("请输入一个三位数");
        //召唤Scanner
        Scanner sb = new Scanner(System.in);
        //指挥Scanner，从键盘录入一个整数
        int i = sb.nextInt();
        //数字拆分
        int a = i % 10;
        int b = i / 10 % 10;
        int c = i / 10 / 10 % 10;
        System.out.println("整数"+123+"的个位是");
        System.out.println(a);
        System.out.println("整数"+123+"的十位是");
        System.out.println(b);
        System.out.println("整数"+123+"的百位是");
        System.out.println(c);
        System.out.println("5 + 5 =" + 5 + 5);//--->5 + 5 = 55
        System.out.println("5 + 5 =" + (5 + 5));//--->5 + 5 = 10
    }
}
