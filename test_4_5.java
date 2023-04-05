import java.util.Scanner;
public class test_4_5 {
    public static void main(String[] args) {
        /*
        switch语句
        格式：
        switch(表达式){
            case 值1;
                语句体1;
            case 值2;
                语句体2;
            ....
            default:
                  语句体n+1;
                  break;
         执行流程：
         1.拿着（）中要匹配的值，跟case给的选项，装个进行匹配
           匹配成功，执行对应的语句体，最后由break结束整个switch语句。
         2.如果给出的所有case都匹配失败了，那么就会执行default语句，最后由break结束整个switch语句。

注意事项：
         1.case后面的数不允许重复
         2.case后面的值，只能是字面量，不可以是变量
         3.switch()中可以接受的类型
                        1）.基本数据类型：byte、short、char、int
                        2）.引用数据类型：jdk5版本可以是枚举，jdk7版本开始可以是String字符串
         4.case的穿透现象
         */
        switchTest();
    }

    //需求：输入对应数字，打印对应星期
    public static void switchTest() {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入");
        int week = sc.nextInt();

        switch (week) {
            case 1:
                System.out.println("星期一");
                break;
            case 2:
                System.out.println("星期二");
                break;
            case 3:
                System.out.println("星期三");
                break;
            case 4:
                System.out.println("星期四");
                break;
            case 5:
                System.out.println("星期五");
                break;
            case 6:
                System.out.println("星期六");
                break;
            case 7:
                System.out.println("星期七");
                break;
            default:
                System.out.println("输入错误");
                break;
        }
    }

    //2）.引用数据类型：jdk5版本可以是枚举，jdk7版本开始可以是String字符串
    public static void stringTest() {

        String num = "1";

        switch (num) {
            case "1":
                System.out.println("星期一");
                break;
            case "2":
                System.out.println("星期二");
                break;
            default:
                System.out.println("输入错误");
                break;
        }

    }

    //case的穿透现象
    public static void caseTest() {
        Scanner sc1 = new Scanner(System.in);
        System.out.println("请输入");
        int week1 = sc1.nextInt();

        switch (week1) {
            case 1:
                System.out.println("星期一");
            case 2:
                System.out.println("星期二");
            case 3:
                System.out.println("星期三");
            case 4:
                System.out.println("星期四");
            case 5:
                System.out.println("星期五");
            case 6:
                System.out.println("星期六");
            case 7:
                System.out.println("星期七");
            default:
                System.out.println("输入错误");
                break;
        }
    }
    //需求：输入一个数值，1-5工作日，6-7休息日
    //case穿透优化代码
    public static void caseTest2() {
        Scanner sc2 = new Scanner(System.in);
        System.out.println("请输入");
        int week2 = sc2.nextInt();

        switch (week2) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                System.out.println("工作日");
                break;
            case 6:
            case 7:
                System.out.println("休息日");
                break;
            default:
                System.out.println("输入错误");
                break;
        }
    }
    //jak14版本开始，case允许编写多个数据，用逗号分隔开
    //再优化：jdk8无法运行
//    public static void caseTest3() {
//        Scanner sc3 = new Scanner(System.in);
//        System.out.println("请输入");
//        int week4 = sc3.nextInt();
//
//        switch (week4) {
//            case 1,2,3,4,5 -> System.out.println("工作日");
//            case 6,7 -> System.out.println("休息日");
//            default-> System.out.println("输入错误");
//        }
//    }
}
/*
if语句：适用于范围性的判断
switch语句：适用于固定值的匹配
 */