import java.util.Scanner;
public class JavaBasicCase4 {
    /*
    需求：
       设计一个方法，查找元素在数组中的索引位置

       已知一个数组arr = {19,28,37,46,50};
       键盘录入一个数据，查找该数据在数组中的索引，并打印
       若没有找到，输出-1
     */
    public static void main(String[] args) {
        int []arr = {19,28,37,46,50,19,19,19};
//        System.out.println("请输入你要查找的数据");
//        Scanner sc = new Scanner(System.in);
//        int num = sc.nextInt();
//        int index = getIndex(num,arr);
//        System.out.println(index);
        int []results = getIndex2(19,arr);
        if(results.length ==0){
            System.out.println("您要查找的元素，在数组中不存在");
        }
        else{
            for (int i = 0; i < results.length; i++) {
                System.out.println(results[i]);
            }
        }
    }

    //查找元素在数组中没有重复的元素，即查找的是数组中第一次出现的元素的索引的位置
    public static int getIndex(int num,int[]arr){
        //1.假设要查找的元素在数组中不存在
        int index = -1;
        //2.遍历数组，获取内部的每一个元素
        for (int i = 0; i < arr.length; i++) {
            //3.比较
            if(arr[i] == num){
                //4.找到了
                index = i;
                break;//提升效率，优化
            }
        }
        return index;
    }


    //考虑重复的情况
    /*
    return 只能返回一个元素
    Question:  当一个方法运行结束后，有多个返回结果，该怎么处理
    Answer：   将多个返回结果放入一个数组容器中，再将数组返回
     */
    public static int[] getIndex2(int num,int []arr){
        //1.统计要查找元素在数组中出现的个数
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == num){
                count++;
            }
        }

        //2.根据统计出来的个数去确定容器大小
        int[]result = new int[count];//动态初始化
        int index = 0;

        //3.查找元素在数组中的索引，将找到的索引，存入数组容器
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == num){
                //找到了索引
                //result[0] = 0;
                //result[1] = 5;
                //result[2] = 6;
                result[index] = i;
                index++;
            }
        }
        return result;
    }

}
