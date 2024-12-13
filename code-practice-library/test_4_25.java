/*
数组内存图
    Java内存分配介绍：
            栈    -----> 方法运行是所进入的内存
            堆    -----> new出来的东西会在这块内存中开辟空间，并产生地址
            方法区 -----> 字节码文件加载时进入的内存
            本地方法栈
            寄存器

     方法参数传递问题：

               1.基本数据类型：传递的是数据值
               2.引用数据类型：传递的是地址值

           Question：
                Java到底是值传递，还是址传递？
           Answer：
                值传递，地址值也是值

数组常见问题
    · ArrayIndedxOutOfBoundsException 当访问了数组中不存在的索引，就会引发索引越界异常
    · NullPointException 空指针异常

二维数组
 */
public class test_4_25 {
    /*
    一道面试题

    public static void main(String[] args) {
        int number = 100;
        System.out.println("调用change方法前：" + number);
        change(number);
        System.out.println("调用change方法后·：" + number);
    }

    public static void change(int number){
        number = 200;
    }

    打印结果：
       调用change方法前：100
       调用change方法后·：100
     */
//改进：
//    public static void main(String[] args) {
//        int number = 100;
//        System.out.println("调用change方法前：" + number);
//        number = change(number);
//        System.out.println("调用change方法后·：" + number);
//    }
//
//    public static int change(int number){
//        number = 200;
//        return number;
//    }

    /*
    第二道面试题
     */
//    public static void main(String[] args) {
//        int[]arr = {11,22,33,44,55};
//        System.out.println("调用change方法之前：" + arr[0]);
//        change(arr);
//        System.out.println("调用change方法之后：" + arr[0]);
//
//    }
//
//    public static void change(int[]arr){arr[0] = 6;}
/*
调用change方法之前：11
调用change方法之后：6
 */
    //因为操作的是地址，堆内存已经被修改了

public static void ArrayIndedxOutOfBoundsExceptionDemo(){
//当访问了数组中不存在的索引，就会引发索引越界异常
    int[]arr = {11,22,33};
    System.out.println(arr[10]);

    for (int i = 0; i <= arr.length ; i++) {
        System.out.println(arr[i]);
    }

}

public static void NullPointExceptionDemo(){
    /*
    空指针异常
    原因：当引用数据类型的变量，被赋值为null，被代表跟堆内存的连接被切断了
         这时还想去访问堆内存的数据，就会出现空指针异常
     */
    int []arr = {11,22,33};
    arr = null;
    System.out.println(arr[0]);
    }

    /*
    二维数组是一种容器，用于存储一维数组
    今后若要操作多组数组，属于同一组数据，就可以考虑使用二维数组维护
     */

    /*
    二维数组的静态初始化
    格式：
      数据类型[][]数组名 = new 数据类型[][]{ {元素1，元素2}，{元素2，元素1} };

    范例：
      int [][]arr = new int [][]{{1,2,3},{3,2,1}};

    简化格式：
      数据类型[][]数组名 = { {元素1，元素2}，{元素2，元素1} };

    范例：
        int [][]arr = {{1,2,3},{3,2,1}};
     */
    public static void main(String[] args) {
        //细节：二维数组在存储一维数组的时候，具体存储的是一维数组的地址值
        /*
        二维数组的元素访问格式：
            数组名[m索引][n索引]

            m索引：指定访问哪一个一维数组
            n索引：访问一维数组中哪一个元素
         */
//        int [][]arr = {
//                {11,22,33},
//                {44,55,66}
//        };
//        System.out.println(arr[0][0]);
//        System.out.println(arr);//[[I@14ae5a5
//        System.out.println(arr[0]);//[I@7f31245a
        int[][]arr = {
                {11,22,33},
                {33,44,55}
        };
        int[][]arr1 = {
                {11,22,33},
                {33,44,55}
        };
        ArrayTest(arr);
        getSum(arr1);
        ArrayTest3(arr);

        //问题： 能不能将提前创建好的一维数组，直接存入二维数组
        //回答：可以的，代码如下
        int[] arr4 = {11,22,33};
        int[] arr5 = {33,44,55};
        int[][] arr6 = new int[2][3];
        arr6[0] = arr4;
        arr6[1] = arr5;

        for (int i = 0; i < arr6.length; i++) {
            for (int j = 0; j < arr6[i].length; j++) {
                System.out.println(arr6[i][j]);
            }
        }
    }

    private static void ArrayTest3(int[][] arr) {
        int[][]arr3 = new int [2][3];

        arr3[0][0] = 11;
        arr3[0][2] = 33;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr3[i].length; j++) {
                System.out.println(arr3[i][j]);
            }
        }
    }

    //二维数组的遍历操作
    /*
    需求：
      遍历并打印二维数组的元素
      已知一个二维数组arr = {{11，22，33}，{33，44，55}};
      遍历该数组，取出所有元素并打印
     */
    public static void ArrayTest(int[][]arr){

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3 ; j++) {
                System.out.println(arr[i][j]);
            }
        }
    }

    /*
    需求：
      遍历二维数组求和
      已知一个二维数组arr = {{11，22，33}，{33，44，55}};
     */
    public static void getSum(int[][]arr1){
        int sum = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3 ; j++) {
                sum += arr1[i][j];
            }
            System.out.println(sum);
        }
    }

    /*
    二维数组的动态初始化：

    格式： 数据类型[][]数组名 = new 数据类型[m][n];
        m表示这个二维数组，可以存放多少个一维数组
        n表示每一个一维数组，可以存放多少个元素
     */


}

/*
Java基础8总结：
  1.数组概念以及使用场景
  2.数组两种初始化
  3.数组元素访问
  4.数组内存图
  5.二维数组概念使用场景
  6.二维数组初始化
  7.遍历二维数组
  8.二维数组内存图
 */
