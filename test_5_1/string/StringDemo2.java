package test_5_1.string;

public class StringDemo2 {
    /*
    String类常见构造方法：

              public String() : 创建一个空白字符串，里面不包含任何内容
              public String(char[] chs) : 根据传入的字符数组，创建字符串对象
              public String(String original) : 根据传入的字符串，来创建字符串对象

          --------------------------------------------------------------------------

          字符串对象，两种创建方式的区别

              1.双引号直接创建
              2.通过构造方法创建
     */
    public static void main(String[] args) {
        //public String() : 创建一个空白字符串，里面不包含任何内容
        String s1 = new String();
        System.out.println(s1);

        //public String(char[] chs) : 根据传入的字符数组，创建字符串对象
        char[] chs = {'a','b','c'};
        String s2 = new String(chs);
        System.out.println(s2);

        //public String(String original) : 根据传入的字符串，来创建字符串对象
        String s3 = new String("abc");
        System.out.println(s3);

    }
}
