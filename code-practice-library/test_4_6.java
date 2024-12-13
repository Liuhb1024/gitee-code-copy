import java.util.Scanner;

public class test_4_6 {
    /*
    循环语句
    循环一段代码循环很多次
·for循环格式
    for(初始化语句; 条件判断句;  条件控制句)
    {

    }
·执行流程：
        1.执行初始化语句，在整个循环中只执行一次
        2.执行判断条件，看其返回结果，true继续，false循环结束
        3.执行循环体语句
        4.执行条件控制句
        5.回到2继续
     */
//    public static void main(String[] args) {
//        checkPassword();
//        forTest();
//        System.out.println("---------------------------------");
//        forTest2(10);
//        System.out.println("---------------------------------");
//        forTest2(20);
//        printNum();
//    }
//
//    public static void checkPassword() {
//
//        Scanner sc = new Scanner(System.in);
//
//        for (int i = 1; i <= 3; i++) {
//            System.out.println("请输入密码：");
//            int password = sc.nextInt();
//            if (password == 123456) {
//                System.out.println("密码正确！");
//            } else {
//                System.out.println("密码错误");
//            }
//        }
//    }
//
//    public static void forTest(){
//        for(int i = 1; i <= 3; i++){
//            System.out.println("打篮球");
//        }
//        for(int j = 0; j <= 10; j++){
//            System.out.println("蔡徐坤");
//        }
//    }
//
//    public static void forTest2(int n){
//        for(int i = 1; i <= n; i++){
//            System.out.println("ctrl");
//        }
//    }
//    //模拟计时器
//    //打印数字1-3   3-1
//    public static void printNum(){
//        for(int i = 1; i <= 3; i++){
//            System.out.println(i);
//        }
//    }
//    public static void printNum1(){
//        for(int i = 3; i >= 1; i--){
//            System.out.println(i);
//        }
//    }
    /*
    求和：
    需求：求1-100之间的偶数和，并把求和结果打印在控制台
     */
    public static void main(String[] args) {
        //getSum();
        int result = getSum();
        System.out.println("1-100之间的偶数和为：" + result);
        daffodilNumber();
        System.out.println("----------------------");
        int count =getdaffodilNumber1();
        System.out.println("水仙花个数为：" + count);
        printRectangle();
        printTriangle();
        printTriangle1();
        print99();
    }

    //    public static void getSum(){
//        int sum = 0;
//        for(int i = 1; i <= 100; i++){
//            if(i % 2 == 0){
//                sum += i;
//            }
//        }
//        System.out.println(sum);
//    }
    //细节处优化：
//    public static int getSum() {
//        int sum = 0;
//        for (int i = 1; i <= 100; i++) {
//            if (i % 2 == 0) {
//                sum += i;
//            }
//        }
//        return sum;
//    }
    //再优化：
    public static int getSum() {
        int sum = 0;
        for (int i = 2; i <= 100; i += 2) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        return sum;
    }

    //在控制台打印水仙花数
    //1.水仙花数是三位数
    //2.个位十位百位的立方和之和等于原数
    public static void daffodilNumber() {
        for (int i = 100; i <= 999; i++) {
            int ge = i % 10;
            int shi = i / 10 % 10;
            int bai = i / 100;
            if (ge * ge * ge + shi * shi * shi + bai * bai * bai == i) {
                System.out.println(i);
            }
        }
    }
    public static void getdaffodilNumber() {
       int num = 0;
       for (int i = 100; i <= 999; i++){
            int ge = i % 10;
            int shi = i / 10 % 10;
           int bai = i / 100;
           if(ge * ge * ge + shi * shi * shi + bai * bai * bai ==i){
                System.out.println(i);
                num++;
            }
        }
       System.out.println(num);
    }
    public static int getdaffodilNumber1() {
        int num = 0;
        for (int i = 100; i <= 999; i++) {
            int ge = i % 10;
            int shi = i / 10 % 10;
            int bai = i / 100;
            if (ge * ge * ge + shi * shi * shi + bai * bai * bai == i) {
                System.out.println(i);
                num++;
            }
        }
        return num;
    }

    /*
    for循环注意事项：
               1.for循环{}中定义的变量，在每一轮结束后都会从内存中释放
               2.for循环（）中定义的变量，在整个循环结束之后，会从内存中释放
               3.for循环（）和{}之间不要写分号

     */
    /*
    循环嵌套：在循环语句中，继续出现循环语句

     */
    //需求：在控制台打印四行五列的矩形
    public static void printRectangle(){
        //外循环：控制行数
        for(int i = 0; i <= 4; i++){
            //内循环：控制列数
            for(int j = 0; j <= 5; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
/*
需求：
   打印
   *
   **
   ***
   ****
   *****
 */
    public static void printTriangle(){
        for(int i = 1; i <= 5; i++){
            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void printTriangle1(){
        for(int i = 5; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    //需求：打印99乘法表
    public static void print99(){
        for(int i = 1; i <= 9; i ++){
            for(int j = 1; j <= i; j++){
                System.out.print(i + "*" + j + "=" + i*j +"\t");
            }
            System.out.println();
        }
    }
}