public class JavaBasicCase2 {
    /*
    需求：数组求和
    {68，27，95，88，171，996，51，210}
    求出该数组满足要求的元素和
    要求是：求和的元素个位十位不能是7，而且只能是偶数
     */

    /*
    1.定义求和变量
    2.遍历数组，获取每一个元素
    3.判断符合的
    4.打印
     */
    public static void main(String[] args) {
        int[]arr ={68,27,95,88,171,996,51,210};
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] % 10 != 7 && arr[i] / 10 %10 !=7 && arr[i] % 2 == 0){
                sum += arr[i];
            }
        }
        System.out.println(sum);
    }
}
