/*
    数组元素访问
    数组的遍历操作
     */
public class test_4_24 {
    /*
    数组元素访问格式：
           数组名[索引]
           索引：索引是数组容器中空间的编号，编号从0开始，逐个+1增长
     */
    public static void main(String[] args) {
        int[]arr ={11,22,33,44,55};

        //取出数组中的22元素
        System.out.println(arr[1]);

        //判断数组中第一个元素，是奇数还是偶数
        if(arr[0] % 2 == 0){
            System.out.println(arr[0] + "是一个偶数");
        }else{
            System.out.println(arr[0] + "是一个奇数");
        }

        //修改数组中第二个元素为66
        arr[2] = 66;
        System.out.println(arr[2]);

        //根据数组中第四个元素，决定在控制台打印多少次ikun
        for(int i = 1; i <= arr[3]; i++){
            System.out.println("ikun");
        }

        System.out.println("------------------------------------------");
        //数组遍历
        //将数组中的元素取出来，进行一系列操作

        //printArry();
        //Test1();
       // getMax();
       // getMax2();
        Test3();
        Test4();
        Test5();
        Test6();
    }
    public static void printArry(){
        int []arr1 = {11,22,33,44,55,66};

//        System.out.println(arr1[0]);
//        System.out.println(arr1[1]);
//        System.out.println(arr1[2]);
//        System.out.println(arr1[3]);
//        System.out.println(arr1[4]);
//        System.out.println(arr1[5]);
        //代码过于臃肿，复用性差
        //改进：
        for(int i = 0; i < 6; i++)
        {
            System.out.println(arr1[i]);
        }
        //弊端：循环次数写死了
        //改进：使用数组名  .length   动态获取到数组的长度（即元素的个数）
        System.out.println(arr1.length);
        for(int i = 0; i < arr1.length; i++)
        //idea遍历数组快捷键： 数组名.fori
        {
            System.out.println(arr1[i]);
        }

    }
    public static void Test1(){
        //需求：已知数组元素为{11，22，33，44，55}，将其数组中的偶数元素取出来并且求和，最后打印结果
        int [] arr2 = {11,22,33,44,55};
        int sum = 0;//定义求和变量

        for (int i = 0; i < arr2.length; i++) {
            if(arr2[i] % 2 == 0){
                sum += arr2[i];
            }
        }
        System.out.println(sum);
    }

    /*
    思路：
    1.定义求和变量，准备累加操作
    2.遍历数组，获取到每个元素
    3.判断当前元素是否为偶数
    4.是的话，进行累加求和
    5.遍历结束后，打印求和结果
     */

    //求最大值{5，44，33，55，22}
    public static void getMax(){
        int []arr3 = {5,44,33,55,67,54,3323,22};
        int max = arr3[0];

        for (int i = 1; i < arr3.length; i++) {
            if(max >= arr3[i]){
                max = max;
            }
            else {
                max = arr3[i];
            }
        }
        System.out.println(max);
    }

    public static int getMax2(){
        int [] arr4 = {1,2,3,4,56,7,8,89};
        int max = arr4[0];

        for (int i = 0; i < arr4.length; i++) {
            if(arr4[i] > max){
                max = arr4[i];
            }
        }
        System.out.println(max);
        return max;
    }
/*
灵活性低
 */
    /*
    需求：
     已知班级学生成绩为 int [] arr = {100.50,20,90,90}
     1.求数组最大值、最小值
     2.总
     3.平均值、低于平均值的个数
     */
    public static int Test3(){
        int [] arry = {100,20,50,90,90};
        int max = arry[0];
        int min = arry[0];
        for (int i = 0; i < arry.length; i++) {
            if(arry[i] > max){
                max = arry[i];
            }
        }
        System.out.println("最高分为：" + max);
        return max;
    }

    public static int Test4(){
        int [] arry1 = {100,20,50,90,90};
        int min = arry1[0];
        for (int i = 0; i < arry1.length; i++) {
            if(arry1[i] < min){
                min = arry1[i];
            }
        }
        System.out.println("最低分为：" +min);
        return min;
    }

    public static int Test5(){
        int [] arry = {100,20,50,90,90};
        int sum = 0;

        for(int i = 0; i < arry.length; i++){
            sum +=arry[i];
        }
        System.out.println("总分为" + sum);
        return sum;
    }

    public static void Test6(){
        int [] arry = {100,20,50,90,90};
        int i = 0;
        int average = 0;
        int sum = 0;
        int count = 0;
        for(i = 0; i < arry.length; i++){
            sum += arry[i];
        }
        average = sum / i;
        System.out.println("平均值为" + average);

        for (i = 0; i < arry.length; i++){
            if(arry[i] < average){
                count++;
            }
        }
        System.out.println("低于平均分的个数为："+count);
    }

}
