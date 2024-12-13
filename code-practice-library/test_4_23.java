/*
数组
1.静态初始化
2.元素访问
3.遍历操作
4.动态初始化
5.内存图
6.常见问题
 */
public class test_4_23 {
    public static void main(String[] args) {
        arryTest2();
    }
    /*
        数组：一种容器，可以用来存储同种数据类型的多个值
        （操作多数据，属于同组数据，就可以考虑使用数组容器进行维护）
         */
    //1.静态初始化：在内存中，为数组容器开辟空间，并将数据存入容器中的过程
    //数组定义格式：
    //int []arr --- 常用
    //int arr[]
    //注意：这种定义格式，定义出来的只是数组类型的变量而已，内春中还没创建出数组容器
    public static void arryTest1(){
        //int []arry;
        int[]arry = {0};

        int arry2[];

        System.out.println(arry);
    }
/*
数组的静态初始化格式：
    1.完整格式：
               数据类型[] 数组名 = new 数据类型[]{元素1，元素2，元素3...}
    2.简化格式：
               数据类型[] 数组名 = 数据类型[]{元素1，元素2，元素3...}

 */
    public static void arryTest2(){
        int []arr1 = {11,22,33};
        double [] arr2 = {11,1,12,3,33};
        System.out.println(arr1);
        System.out.println(arr2);
        /*
        打印结果：
        @：分隔符
        [：当前空间，是数组类型的
        I:当前数组类型，是int类型
        D:当前数组类型，是double类型
        14ae5a5 、 7f31245a：数组在内存中的地址
        [I@14ae5a5
        [D@7f31245a
         */
    }
}




















