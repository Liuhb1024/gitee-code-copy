import java.util.Random;
import java.util.Scanner;

public class RevewBasicCase1_7 {
    public static void main(String[] args) {
        case1();
        case2();
        case3();
        case4();
        case5();
        case6();
        case7();
    }

    public static void case1(){
        /*
             需求：逢7过
             在控制台打印出1-100逢7必过的数据
        */
        for (int i = 1; i < 100; i++) {
            int a = i / 10;
            int b = i / 10 % 10;
            if(a == 7 || b == 7 || i % 7 == 0){
                System.out.println(i);
            }
        }
    }

    public static void case2(){
        /*
    需求：数组求和
    {68，27，95，88，171，996，51，210}
    求出该数组满足要求的元素和
    要求是：求和的元素个位十位不能是7，而且只能是偶数
        */
        int[]arr = {68,27,95,88,171,996,51,210};
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] / 10 != 7 && arr[i] / 10 % 10 != 7 && arr[i] % 2 ==0){
                sum += arr[i];
            }
        }
        System.out.println(sum);
    }

    public static void case3(){
        /*
    需求：定义一个方法，用于比较两个数组是否完全相同
         要求：
            长度、内容、顺序完全相同
     -----------------------------------------------------
    在完成这段程序之前，我们得明确一个知识点，先看以下程序
     */
        int[]arr1 = {11,22,33};
        int[]arr2 = {11,22,33};

        boolean result = checkArrayContent(arr1,arr2);
        System.out.println(result);
    }

    public static boolean checkArrayContent(int[]arr1,int[]arr2){
        if(arr1.length != arr2.length){
            return false;
        }

        for (int i = 0; i < arr1.length; i++) {
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }

    public static void case4(){
        /*
    需求：
       设计一个方法，查找元素在数组中的索引位置

       已知一个数组arr = {19,28,37,46,50};
       键盘录入一个数据，查找该数据在数组中的索引，并打印
       若没有找到，输出-1
      */
        int[]arr = {19,28,37,46,55,19,19,19};
        System.out.println("请输入你要查找的数据：>");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int[]result = getIndex(num,arr);
        if(result.length == 0){
            System.out.println("你所查找的数据不存在:-1");
        }
        else{
            for (int i = 0; i < result.length; i++) {
                System.out.println(result[i]);
            }
        }
    }

    public static int[]getIndex(int num,int[]arr){
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == num)
            count++;
        }

        int[]result = new int[count];//动态初始化
        int index = 0;

        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == num){
                result[index] = i;
                index++;
            }
        }
        return result;
    }

    public static void case5(){
         /*
    需求：
       已知一个数组 arr = {11,22,33,44,55};用程序实现把数组中的元素值交换，
       交换后的数组 arr = {55,44,33,22,11};并在控制台输出交换后的数组元素
     */
        Swapdemo1();
        Swapdemo2();
    }
    public static void Swapdemo1(){
        int[]arr = {11,22,33,44,55};

        for (int i = 0; i < arr.length / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[arr.length - 1 - i];
            arr[arr.length - 1 - i] = temp;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    public static void Swapdemo2(){
        int []arr = {11,22,33,44,55};
        for (int start = 0, end = 4; start < end; start++, end--){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    public static void case6(){
        /*
    评委打分：
    需求：
       在编程竞赛中，有6个评委为参赛选手打分，分数为0-100的整数分
       选手最后得分为： 去掉一个最高分和最低分后的四个评委的平均分
     */
        int[]arr = new int [6];
        System.out.println("请输入六个评委的打分：>");
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < arr.length; i++) {
            System.out.println("请输入第"+(i + 1) +"位评委的打分");
            int score = sc.nextInt();
            if(score >= 0 && score <= 100){
                arr[i] = score;
            }
            else{
                System.out.println("您的输入有误，请重新输入。");
                i--;
            }
        }

        int max = 0;
        for (int i = 0; i < arr.length; i++) {
            if(max < arr[i]){
                max = arr[i];
            }
        }

        int min = 0;
        for (int i = 0; i < arr.length; i++) {
            if(min > arr[i]){
                min = arr[i];
            }
        }

        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }

        double all = ((sum - max - min) * 1.0) / 6;
        System.out.println("最终得分为"+all);
    }

    public static void case7(){
        /*
    随机生成验证码
    需求：
        从26个英文字母（包含大小写），以及数字0-9中
        随机生成一个5为字符串的验证码并打印在控制台

    思路：
           从数组中随机取出一个元素

                根据数组的长度，产生一个随机数，拿着这个随机数，当做索引去数组中获取元素

     */
        char[]chs = new char[26+26+10];

        int index = 0;
        for (char c = 'a'; c <= 'z'; c++){
            chs[index] = c;
            index++;
        }

        for (char c = 'A'; c <= 'Z'; c++){
            chs[index] = c;
            index++;
        }
        for (char c = '0'; c <= '9'; c++){
            chs[index] = c;
            index++;
        }

        Random r = new Random();
        String checkCode = "";
        for (int i = 1; i <= 5 ; i++) {
            int randomIndex = r.nextInt(chs.length);
            checkCode += chs[randomIndex];
        }

        System.out.println(checkCode);
    }

}
