import java.util.Scanner;

public class JavaBasicCase6 {
    /*
    评委打分：
    需求：
       在编程竞赛中，有6个评委为参赛选手打分，分数为0-100的整数分
       选手最后得分为： 去掉一个最高分和最低分后的四个评委的平均分
     */
    public static void main(String[] args) {
        int[] arr = innateData();

        int sum = getSum(arr);

        int max = getMax(arr);

        int min = getMin(arr);

        double all = ((sum - max - min) * 1.0)/ (arr.length - 2);
        System.out.println("最终得分为："+ all);
    }

    //求最小值
    private static int getMin(int[] arr) {
        int min = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if(min > arr[i]){
                min = arr[i];
            }
        }
        return min;
    }

    //求最大值
    private static int getMax(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if(max < arr[i]){
                max = arr[i];
            }
        }
        return max;
    }

    //求总和
    private static int getSum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    //此方法用于录入6个评委的评分
    private static int[] innateData() {
        int[]arr = new int [6];

        System.out.println("请输入6个评委的评分：>");
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < arr.length; i++) {
            System.out.println("请输入第" + (i+1) + "位评委的打分");
            int score = sc.nextInt();

            if(score >= 0 && score <= 100){
                arr[i] = score;
            }
            else{
                System.out.println("您的输入有误，请检查是否在1-100之间");
                i--;
            }
        }
        return arr;
    }
}
