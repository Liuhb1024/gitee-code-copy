public class JavaBasicCase3 {
    /*
    需求：定义一个方法，用于比较两个数组是否完全相同
         要求：
            长度、内容、顺序完全相同
     -----------------------------------------------------
    在完成这段程序之前，我们得明确一个知识点，先看以下程序
     */
    public static void main(String[] args) {
        int []arr1 = {11,22,33};
        int []arr2 = {11,22,33};

        System.out.println(arr1 == arr2);
        //打印结果：false
        /*
           ==：

              1.基本数据类型： 比较数据值
              2.引用数据类型： 比较地址值
         */
        boolean result = checkArrayContent(arr1,arr2);
        System.out.println(result);

    }

    public static boolean checkArrayContent(int[]arr1,int[]arr2){
        //1.比较数组长度
        if(arr1.length != arr2.length){
            return false;
        }

        //若代码能走到这里，说明两个数组的长度相等
        //数组的长度相同，意味着索引也是相同的

        //2.比较数组中的元素内容
        //遍历数组
        for (int i = 0; i < arr1.length; i++) {
            //i = 0 1 2
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        //代码要是能走到这，这就说明代码长度、内容、顺序相同
        return true;
    }
}
