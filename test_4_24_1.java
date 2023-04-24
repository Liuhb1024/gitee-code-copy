import java.util.Scanner;

/*
数组动态初始化
两种初始化的区别
 */
public class test_4_24_1 {
/*
      数组动态初始化
         初始化时只指定数组长度，由系统为数组分配初始值
        格式：
          数据类型[ ] 数组名 = new 数据类型[数组长度];
        范例：
          int[]arr = new int[3];
        默认值的分类：
                整数：0
                小数：0
                布尔：false
      ----------------------------------
                字符：'\u0000' ----------->Unicode字符 --->常见的体现是空白字符
                字符串：null
 */
       public static void main(String[] args) {
           arryTest();
           System.out.println("--------------------------------------");
           //动态初始化：
           int[] arr = getInts();

           int max = getMax(arr);
           System.out.println("最大值为：" + max);

           //静态初始化：
           /*
           Scanner sc = new Scanner(System.in);
           System.out.println("请输入五个学生成绩：");
           int num1 = sc.nextInt();
           int num2 = sc.nextInt();
           int num3 = sc.nextInt();
           int num4 = sc.nextInt();
           int num5 = sc.nextInt();

           int []num = {num1,num2,num3,num4,num5};
           for (int i = 0; i < arr.length; i++) {
               System.out.println("请输入第"+(i+1)+"个");
               arr[i] = sc.nextInt();
           }
           不灵活，麻烦
           */
       }
//idea快捷键：ctrl + alt + M
    private static int[] getInts() {
        Scanner sc = new Scanner(System.in);
        System.out.println("键盘录入班级成绩，请输入班级人数：>");
        int count = sc.nextInt();
        System.out.println("请输入五个学生的成绩：");
        int []arr= new int [count];

        for (int i = 0; i < arr.length; i++) {
            System.out.println("请输入第"+(i+1)+"个");
            arr[i] = sc.nextInt();
        }
        return arr;
    }

    public static void arryTest(){
           int[]arr = new int[3];

           for (int i = 0; i < arr.length; i++) {
               System.out.println(arr[i]);
           }
       }
       /*
       两种初始化的区别
       动态初始化：  初始化时只指定数组长度，由系统为数组分配初始值
       静态初始化：  手动指定数组元素，系统会根据元素个数，计算出数组的长度

       使用场景：
            1.静态初始化：如果需求中已经明确给出了，直接静态初始化
                  需求：已知班级学生成绩为:100 100 20 50 90,找出最高分
                     int []arr = {100,100,20,50,90};
            2.动态初始化：只明确元素个数，不明确具体数值
                   需求：键盘录入5个学生成绩，找出最高分
                   int[]arr = nwe int[5];
        */
        public static int getMax(int []arr){
            int max = 0;
            for (int i = 0; i < arr.length; i++) {
                if(arr[i] > max){
                    max = arr[i];
                }
            }
            return max;
        }
}
