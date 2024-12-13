package test_5_1.scanner;

import java.util.Scanner;

public class ScannerDemo1 {
    /*
    Scanner键盘录入字符串：

              String next() : 遇到了空格，或者是tab键不在录入了
              String nextLine() : 以回车作为录入的结束标记

              弊端：
                       1.next() : 数据可能录入不完整
                       2.nextLine() : 之前调用过nextInt(),nextDouble(),nextFloat()...
                                      nextLine()就不干活了

              解决方案：不用解决
                         Scanner : 采集用户信息 (只在学习过程中用得到)

              目前使用方案：
                         需求如果要键盘录入字符串
                               如果所有的数据，全部都是字符串，直接nextLine();
                                        举例：
                                               键盘录入用户名，键盘录入用户密码

                               如果数据除了字符串，还有其他类型，需要调用next()方法
                                        举例：
                                               键盘录入用户名，键盘录入用户名年龄，用户身高


     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入用户名");
        String username = sc.nextLine();
        System.out.println(username);

        System.out.println("请输入用户密码");
        String password = sc.nextLine();
        System.out.println(password);

        System.out.println("请输入用户名年龄");
        int age = sc.nextInt();
        System.out.println(age);

        System.out.println("请输入用户名");
        String name = sc.next();
        System.out.println(name);
    }
}
