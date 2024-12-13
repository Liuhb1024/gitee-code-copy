public class JavaBasicCase5 {
    /*
    需求：
       已知一个数组 arr = {11,22,33,44,55};用程序实现把数组中的元素值交换，
       交换后的数组 arr = {55,44,33,22,11};并在控制台输出交换后的数组元素
     */
    /*
    在此之前，先用一个普通的例子来说明变量间的数据交换: SwapDemo1
    涉及到数据交换，就需要联想到定义第三方变量
     */
    //面试题：实现两个变量交换，不允许使用第三方变量： SwapDemo2

    //综上，数组中第一个元素与最后一个元素交换： SwapDemo3

    //交换数组思路：SwapDemo
    /*
    1.交换的动作不止一次，使用循环技术
    2.循环条件： i < arr.length / 2
     */
    public static void main(String[] args) {
        SwapDemo1();
        System.out.println("-----------------------");
        SwapDemo2();
        System.out.println("-----------------------");
        SwapDemo3();
        System.out.println("-----------------------");
        //第一种实现方式
        SwapDemo();
        System.out.println("-----------------------");
        //第二种实现方式
        SwapDemos();

    }

    public static void SwapDemo1(){
        int a = 10;
        int b = 20;
        System.out.println("交换之前");
        System.out.println("a =" + a);
        System.out.println("b =" + b);
        System.out.println("--------------------------");
        int tmp = a;
        a = b;
        b = tmp;
        System.out.println("交换之后");
        System.out.println("a =" + a);
        System.out.println("b =" + b);

    }

    /*
    ^ 异或 ：
                   特点1.相同为false，不同为true
                   特点2.一个数字被另外一个数字^两次，该数字不变

    ^ 异或操作数值的运算过程：

               1. 将需要运算的数据，转换为二进制数
                      0000 1010         10
                      0000 0010          2
               2.将二进制数据的0当成false，1当作true， 运算
                      0000 1010         10
                 ^    0000 0010          2
                 ---------------------------------
                      0000 1000          8
     */
    public static void SwapDemo2(){
        System.out.println(10^2);
        System.out.println(10^2^10);

        int a = 10;
        int b = 20;

        System.out.println("交换之前");
        System.out.println("a =" + a);
        System.out.println("b =" + b);

        a = a ^ b; //10 ^ 20
        b = a ^ b; //10 ^ 20 ^ 20 ---> 10
        a = a ^ b; //10 ^ 20 ^ 10 ---> 20

        System.out.println("交换之后");
        System.out.println("a =" + a);
        System.out.println("b =" + b);
    }

    public static void SwapDemo3(){
        int[]arr = {11,22,33,44,55};

        int temp = arr[0];
        arr[0] = arr[arr.length-1];
        arr[arr.length-1] = temp;

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    //数组交换：
    /*
    1.确定好谁和谁换
               第一个和倒数第一个交换：arr[0] arr[arr.length - 1]
               第二个和倒数第二个交换：arr[1] arr[arr.length - 1 - 1]
               第三个和倒数第三个交换：arr[2] arr[arr.length - 1 - 2]
               ............
               arr[i]  arr[arr.length - 1 - i]
    2.定义第三方变量，套入公式
     */
    public static void SwapDemo(){
        int []arr = {11,22,33,44,55};

        for (int i = 0; i < arr.length / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[arr.length - 1 -i];
            arr[arr.length - 1 - i] = temp;
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    //第二种实现方式 --- 创建两个指针 1.start 2.end
    /*
    1.定义两个变量，模拟两个指针
        int start = 0;
        int end = arr.length - 1;
    2.交换
        int temp = arr[0];
        arr[0] = arr [5];
        arr[5] = temp;
    3.每一次交换完成，让两个指针向中间移动
        start++;
        end--;
    4.if(end < start) break;
    交换条件：start < end
     */
    public static void SwapDemos(){
        int[]arr = {11,22,33,44,55};

        for (int start = 0, end = arr.length - 1; start < end; start++, end--){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
}
