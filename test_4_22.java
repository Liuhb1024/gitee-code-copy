
import java.util.Random;
import java.util.Scanner;
import java.util.Random;

public class test_4_22 {
    /*
    do...while格式

    初始化语句;
    do{
     循环体语句;
     条件控制句;
    }while(判断条件);

    执行流程：

    1.执行初始化语句
    2.执行循环体语句
    3.执行条件控制语句
    4.执行判断条件，看其返回结果是true，false
            false：循环结束
            true：回到第二步继续
     */
//    public static void main(String[] args) {
//        for(int i = 1; i <= 5; i++){
//            System.out.println("蔡徐坤");
//        }
//        int i = 0;
//        do {
//            System.out.println("蔡徐坤");
//            i++;
//        }while (i <= 5);

        /*
        for循环和while循环的区别（本质上没有区别）

        for循环：用于控制循环的那个变量，在循环结束后，就会从内存中消失，循环结束后，不能继续使用

        while循环：用于控制循环的那个变量，在循环结束后，不会从内存中消失，循环结束后，可以继续使用

         */
//    }


    /*
    三种循环的区别：
    1.for循环和while循环（先判断后执行）
    2.do...while(先执行后判断)

     */

    public static void main(String[] args) {
        //login();
        //print();
        //initMenu();
        //randomTest();
        guessNumber();
        /*
        跳转控制语句:break
        结束循环、switch

        注意事项：
        只能在循环或者switch语句之中。
         */
        /*
        需求：模拟用户登录，三次机会
        密码123456
         */
    }
    public static void login(){
        Scanner sc = new Scanner(System.in);

        int i = 0;
        for(i = 0; i < 3; i++) {
            System.out.println("请输入秘密：>");
            int password = sc.nextInt();

            if (password == 123456) {
                System.out.println("登录成功");
                break;
            } else {
                System.out.println("登录失败，密码错误！");
            }
        }
    }
/*
continue：跳过

注意事项：只能在循环中使用
 */
    public static void print(){
        for(int i = 0; i <= 100; i++){
            if(i == 3 || i == 7 || i ==17){
                continue;//跳过 3、7、17
            }
            System.out.println("第" + i + "名ikun唱跳rap");
        }
    }
    /*
    continue、break的共同注意事项：
    他们下面不能加代码语句，执行不到，属于无效代码
     */

    /*
    死循环的格式
    1.for(;;){}

    2.while(true){}

    3.do{}while(true);
     */
    public static void initMenu(){
        Scanner sc1 = new Scanner(System.in);
        //标号：case 5
        lo:
        while (true){
        System.out.println("请输入你的选择：> 1.添加学生 2.删除学生 3.修改学生 4.查看学生 5.退出");
                int choice = sc1.nextInt();
        switch(choice){
            case 1:
                System.out.println("添加学生逻辑执行...");
                break;
            case 2:
                System.out.println("删除学生逻辑执行...");
                break;
            case 3:
                System.out.println("修改学生逻辑执行...");
                break;
            case 4:
                System.out.println("查看学生逻辑执行...");
                break;
            case 5:
                System.out.println("感谢您的使用，再见！");
                break lo;
        }}
    }

/*
    Random使用
    import java.util.Random;
    public class test(){
        public static void main(String[] args) {
            Random r = new Random();
            int num = r.nextInt(10);//0-9的随机数
            int num = r.nextInt(100) + 1;//1-100
        }
    }
     */

    public static void randomTest(){
        Random r = new Random();
        for (int i = 0; i < 20; i++) {
            int num = r.nextInt(100) + 1;
            System.out.println(num);
        }
        System.out.println("--------------------------------");
        //需求：生成一个20-80的随机数
        for(int i = 1; i <= 20; i++) {
            int num = r.nextInt(61) + 20;
            System.out.println(num);
        }
    }
    /*
    需求：实现猜数字游戏
    1.使用Random产生一个1-100的随机数 ----> randomNumber
    2.使用Scanner从键盘录入用户的数值 ----> scNumber
    3.比对
     */

    public static void guessNumber()
    {
        Random r1 = new Random();
        Scanner sc2 = new Scanner(System.in);
        //1.使用Random产生一个1-100的随机数 ----> randomNumber
        int randomNumber = r1.nextInt(100) + 1;

            while(true){
                //2.使用Scanner从键盘录入用户的数值 ----> scNumber
                System.out.println("请输入：>");
                int scNumber = sc2.nextInt();
                //3.比对
                if(scNumber > randomNumber){
                    System.out.println("猜大了");
                }
                else if(scNumber < randomNumber){
                    System.out.println("猜小了");
                }
                else{
                    System.out.println("猜中了！");
                break;
                }
            }
        System.out.println("恭喜你！");
    }

}
/*
能够掌握if、switch语句的使用，明确使用场景
掌握for循环、while循环以及do...while循环
break、continue的使用
用Random生成随机数
独立完成猜数字小游戏

 */
