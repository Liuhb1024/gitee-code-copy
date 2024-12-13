import java.util.Scanner;
public class test_4_3 {
    /*
    流程控制语句分类：
    1.顺序结构  2.分支结构  3.循环结构
    ----------------------------------
    1.顺序结构：Java程序的默认执行流程
    ----------------------------------
    2.分支结构（if switch）
     */
    public static void main(String[] args) {
        /*
        if语句的第一种格式

           if(判断条件){
               语句体;
           }

    执行流程：
              1.执行判断条件，看其结果是true、false
              2.true：执行{}中的语句体
              3.false：不执行

         if语句的第二种格式

              if(判断条件){
               语句体1;
           }else{
               语句体2;
           }
    执行流程
              1.执行判断条件，看其结果是true、false
              2.true：执行语句1
              3.false：执行语句2

          if语句的第三种格式

              if(判断条件){
               语句体1;
           }else if(判断条件2){
               语句体2;
               ····
               else(判断条件n+1){
               语句体n + 1;
               }
           }

    执行流程:
              1.执行判断条件1，看其返回结果是true，false
              true : 执行语句体1，执行完毕后，结束整个if语句。
              false : 执行第二步
              2。执行判断条件2，看其返回结果是true， false
              true : 执行语句体2，执行完毕后，结束整个if语句。
              false : 执行第三步
              3.如果给出的所有条件，都不成立，将会执行最后的 etse

         */
        ifTest1();
        ifTest2();
        ifTest3();
        checkPassword();
        queryPrizeScore();
    }
    public static void ifTest1(){
        System.out.println("开始");
        int age = 19;
        if(age >= 18){
            System.out.println("可以上网吧！");
        }
        System.out.println("结束");
    }

    public static void ifTest2(){
        System.out.println("开始");
        int age = 17;
        if(age >= 18){
            System.out.println("可以上网吧！");
        }else{
            System.out.println("不可以上网吧！");
        }
        System.out.println("结束");
    }

    public static void ifTest3(){
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入");
        int num = sc.nextInt();

        if(num == 1){
            System.out.println("会员");
        }
        else if(num == 2){
            System.out.println("非会员");
        }
        else{
            System.out.println("输入错误");
        }
    }
    //案例：键盘输入用户密码，如果是123456，则输出密码正确，否则密码错误

    public static void checkPassword(){
        Scanner password = new Scanner(System.in);
        System.out.println("请输入密码");
        int sec = password.nextInt();

        if(sec == 123456){
            System.out.println("密码正确");
        }
        else{
            System.out.println("密码错误");
        }
    }
    //idea的一个快捷键：ctrl + alt + l 格式化代码
    //案例：键盘录入考试成绩，根据考试成绩所在的区间，程序打印出不同的奖励机制
    public static void queryPrizeScore(){
        Scanner sc1 = new Scanner(System.in);
        System.out.println("请输入你的分数");
        int score = sc1.nextInt();
        if(score < 0 || score > 100){
            System.out.println("你的输入错误");
        }
        else if(score >= 90 && score <= 100){
            System.out.println("奖励你一个老婆");
        }
        else if(score >= 80 && score < 90){
            System.out.println("奖励你一个蔡徐坤");
        }
        else if(score >= 70 && score < 80){
            System.out.println("奖励你一个篮球");
        }
        else if(score >= 60 && score < 70){
            System.out.println("奖励你一个rapper");
        }
        else{
            System.out.println("奖励你一只鸡");
        }

    }
}



























