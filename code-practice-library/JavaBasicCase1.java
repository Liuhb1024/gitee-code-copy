public class JavaBasicCase1 {
    /*
    需求：逢7过
    在控制台打印出1-100逢7必过的数据
     */

    /*
    思路：
    1.通过循环获取1-100的每一个数字
    2.数值拆分，拆分出个位和十位
    3.加入if语句判断
            if(ge == 7 || shi ==7 || i % 7 == 0)
    4.打印
     */
    public static void main(String[] args) {
        for (int i = 1; i <= 100 ; i++) {
            int a = i % 10;
            int b = i / 10 % 10;
            if(a == 7 || b == 7 || i % 7 == 0){
                System.out.println(i);
            }
        }
    }



}
