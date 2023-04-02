import java.util.Scanner;
public class test_4_1_1 {
    public static void main(String[] args) {
        /*
        运算符
            赋值运算符：
              1.基本运算符：
                         = 将等号右边的数据，赋值给左边的数据
                         int num = 10;
              2.拓展赋值运算符：
                         +=：将符号两边的数据，先做加法，然后赋值给左边
                         -=：将符号两边的数据，先做减法，然后赋值给左边
                         *=：将符号两边的数据，先做乘法，然后赋值给左边
                         /=：将符号两边的数据，先做除法，然后赋值给左边
                         %=；将符号两边的数据，先做取余，然后赋值给左边
       ------------------------------------------------------------------
       细节补充：拓展赋值运算符，内部自带强制转换

                  short s = 1;
                  s = short(s + 1);  //s = s + 1;
         */
        double a = 12.3;
        int b = 10;
        b += a;
        System.out.println(b);
        //结果： 22
        //----------------------------
        /*
        关系运算符：关系运算符的结果都是boolean类型的，要么是true，要么是false，千万不能把==误写成=
        >
        >=
        <
        <=
        ==
        !=
         */
        System.out.println(10 > 20);
        System.out.println(10 >= 20);
        System.out.println(10 < 20);
        System.out.println(10 <= 20);
        System.out.println(10 == 20);
        System.out.println(10 != 20);
        //结果：
        //false
        //false
        //true
        //true
        //false
        //true
        /*
        逻辑运算符
        -------------------------------------------------------
        需求：在程序中，判断一个学生的成绩是否在90~100之间，是的话输入优秀
        -------------------------------------------------------
        1.连接布尔类型的表达式，或者值
        2.逻辑运算符，可以用来整合多个条件，为一段整体的逻辑
        分类：
        1.&（与） 并且，遇f则f
            场景：范围性的判断查找
            例子：键盘录入一个学生成绩，判断该成绩是否在90~100之间
            伪代码，不能运行，仅供理解
        2.|（或） 或者，遇t则t
            场景：多个条件任选一
            例子：键盘输入一个学生的学号，学号3 5 12
            int id= 3;
             如果(id == 3 | id == 5 | id ==12){
             }
        3.！（非） 取反
            场景：对一段逻辑的整体进行取反操作
            例子：键盘输入一个学生的学号，除了学号3 5 12其他都要
        4.^（异或）同假异真
         */
        int score = 95;
        //&
        System.out.println(score > 90 & score < 100);
        System.out.println(true & true);//t
        System.out.println(true & false);//f
        System.out.println(false & true);//f
        System.out.println(false & false);//f
        //|
        System.out.println(true | true);//t
        System.out.println(true | false);//t
        System.out.println(false | true);//t
        System.out.println(false | false);//f
        //^
        System.out.println(true ^ true);//f
        System.out.println(true ^ false);//t
        System.out.println(false ^ true);//t
        System.out.println(false ^ false);//f
        /*
        短路逻辑运算符：
        &  : 没有短路效果，无论左右是不是false，右边照样还是要运行
        && : 具有短路效果，左边有false，右边执行不了
             左边为true，右边继续执行
        |  : 没有短路效果，无论左右是不是false，右边照样还是要运行
        || : 具有短路效果，左边有true，右边执行不了
             左边为false，右边继续执行
        常用的逻辑运算符：   &&   ||   ！
         */
        int x = 3;
        int y = 4;
        boolean result = ++x > 5 & y-- < 4;
        boolean result1 = ++x > 5 && y-- < 4;
        System.out.println(x);//4
        System.out.println(y);//3 //4
        System.out.println(result);//false
        System.out.println(result1);//false
        /*
        三元运算符
        ·格式：判断条件？值1：值2
        ·执行流程：先计算判断条件，若true，运算值1，反之
        例子如下：
         */
        //需求：求两个整数的最大值
        int num1 = 10;
        int num2 = 20;

        int max = num1 > num2 ? num1 : num2;
        //hold ? fish : palm;  鱼与熊掌不可兼得
        //案例：输入三个整数，求最大值
        /*
        1.Scanner
        2.键盘录入三个整数
        3.计算前两个数的最大值---tempMax
        4.计算三个整数的最大值---tempMax和第三个数计算
        5.打印
         */
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入三个整数");
        int number1 = sc.nextInt();
        int number2 = sc.nextInt();
        int number3 = sc.nextInt();
        int tempMax = number1 > number2 ? number1 : number2;
        int Max = tempMax > number3 ? tempMax : number3;
        System.out.println(Max);
        /*
        运算符优先级
        1. . () {}
        2. ! - ++ --
        3. * / %
        4. + -
        5. << >> >>>
        6. < <= > >= instanceof
        7. == !=
        8. &
        9. ^
        10. |
        11. &&
        12. ||
        13. ?:
        14. = += -= /= %= &=
         */



    }
}
