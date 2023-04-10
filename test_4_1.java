public class test_4_1 {
    public static void main(String[] args) {
        /*
       ·自增自减运算符【++、--】：只能操作变量，不可操作常量
        ++：让变量自身的值+1
        --：让变量自身的值-1

        1.单独使用：一句代码中，只做++，不做--
                  --在变量前面，还是后面，没有区别
                  int a = 10;
        int b = 10;
        a++;
        b--;
        System.out.println(a);
        System.out.println(b);

        2.参与运算使用：
                    ++ 在前，先自增，再操作、
                    int a = 10;
                    int b = ++a;//a =11;b = 11
                    System.out.println(a); //----->11
                    System.out.println(b); //----->11

                    ++ 在后，先操作，再自增
                    int a = 10;
                    int b = a++;//a =10;b = 11
                    System.out.println(a); //----->11
                    System.out.println(b); //----->10
         */
        //一道面试题
//        int x = 10;
//        int y = x++;
//        int z = ++y;
//
//        System.out.println("x=" + x); // ---> 11
//        System.out.println("y=" + y); // ---> 11
//        System.out.println("z=" + z); // ---> 11
//        //y = 10, x = 11;
//        //y = 11, z = 11;
//        System.out.println("-------------------------------------------------");
//        int a = 3;
//                 //4  +  4 --->5  50
//        int b = (++a) + (a++) + (a * 10);
//        System.out.println("a="+a);
//        System.out.println("b="+b);
        //答案是5，58

        /*
       ·类型转换
               1.隐式转换
                 把一个取值范围小的数值或变量，赋值给另一个取值范围大的变量
                 【小的给大的，可以直接给】
        int a = 10;
        double b = a;
        System.out.println(b);
        结果：10.0
        -------------------------------------------------
        表示数据取值范围从小到大：
        byte ---> short、char ---> int ---> long ---> float ---> double
        -------------------------------------------------
        问题：
             float占用4个字节，为什么放在了long（8个字节）的后面
        解释:
             虽然float占用4个字节，但是【取值范围】要比8个字节的long更大
             - 小数的二进制存储形式，更加节省内存
        -------------------------------------------------
        运算过程中的隐式转换：
                        1.取值范围小的数据，和取值范围大的数据进行运算，小的会提升为大的，再进行运算
        int a = 10;
        double b = 12.3;
        double c = a + b;
        System.out.println(c);
                        2.byte short char 三种数据在运算的时候，都会提升为int，再进行运算
        ------------
        byte a = 10;
        byte b = 10;
        int c = a + b;
        ------------
        int a = 1;
        char b = 'a';
        int c = a + b;
        System.out.println(c); ---> 97 + 1 ---> 98
        ------------
               2.强制转换
               把一个取值范围大的数据或变量，赋值给一个取值范围小的变量
               不允许直接赋值，需要加入强制转化
               double a = 12.3;
               int b = (int) a;
               System.out.println(b); ---> 12
               -------------------------
               int num1 = 130;
               byte num2 =(byte) num1;
               System.out.println(num2);
               结果：-126
               TODO:为什么是-126呢？下面我们通过进制来了解：

       ·进制：
        计算机存储数据的单位：字节
        计算机的进制分类：
        1.二进制【0、1】，逢二进一，借一当二【ob】开头
        2.十进制【0、1、2、3、4、5、6、7、8、9】逢十进一，借一当十
        3.八进制【0、1、2、3、4、5、6、7】【0】开头---今后写数值，尽量不要0开头
        4.十六进制【0、1、2、3、4、5、6、7、8、9、a、b、c、d、e、f】【0x】开头

         */
        System.out.println(110);
        System.out.println(0b110);//jdk7版本开始被允许的
        System.out.println(0110);
        System.out.println(0x110);
        /*
        二进制到十进制的转换
        公式：系数*基数的权次幂相加
        系数：就是每一位上的数
        基数：就是当前进制数
        权：从右往左，依次为0、1、2、3、4、5...
        eg:二进制101 ： 1*2^2 + 0*2^1 + 1*2^0 = 5

        8421快速转换法：
                  二进制中，每一位的1都是代表一个固定数值
                  把每一位的1代表的十进制数加起来得到的结果就是它所代表的十进制数
                  -----------------------
                   1  1  1  1   1 1 1 1
                  128 64 32 16  8 4 2 1
                  -----------------------
                  eg：二进制1101： 8 + 4 + 1 = 13

        ·原码反码补码
         --------------------------------------------
       1.原码：数据的二进制体现形式，一个字节由8个二进制位组成
         高位：二进制数据中，最左侧的数据，通过高位代表符号位
         0代表正数
         1代表负数
         其余位表示数值大小
         弊端：遇到负数运算，会出现错误
         --------------------------------------------
         计算机在运算的时候，都是以二进制的补码形式在运算
         --------------------------------------------
       2.反码
        正数的反码与其原码相同
        负数的反码其实就是对其原码逐位取反，但符号位除外
         --------------------------------------------
       3.补码
        正数的补码与其原码相同
        负数的补码就是在其反码的末位加1
         --------------------------------------------
         强转中的精度损失
         TODO:解决为什么是-126
         130 十进制数转换为二进制 ---> 补码状态
         00000000 00000000 00000000 10000010 ---> int a = 130;的形式
         byte b = (byte) a;
         强制转换：4 个字节强制转换为1个字节，就是砍掉前3组8位
         10000010 --- 补码
         取反加一
         11111110 --- -126

         到此解决！

         */
        //接下来一道涵盖以上知识点的面试题
        //下列代码是否错误，如果有，请指出说明，并改正
        /*
        byte b1 = 3;
        byte b2 = 4;
        byte b3 = b1 + b2;
        byte b = 3 + 4 ;
        错误原因：
               b1和b2是两个byte类型，在运算的时候，会提升为int类型
               提升之后，就是两个int类型了，那么运算结果也就是int类型
               将int类型的结果，赋值给byte类型变量，属于大给小，不愉快直接给
        修改方法：
               byte b3 = byte(b1 + b2);
        */
        //byte b3 = b1 + b2;  会报错！
        //byte b = 3 + 4 ;  不会报错，Java存在常量优化机制：在编译的时候（javac）就会将3和4这两个字面量进行运算
        //                      产生的字节码文件：byte b= 7;

        /*
        --------------------------------------------------------------
        总结Java基础2——3：
        掌握变量的定义和使用
        能够使用好Debug工具查看程序的执行流程
        Scanner
        清楚运算符 / % 的特点
        Java中的字符串拼接
        自增自减符的前后区别
        清楚隐式转换和强制转化
        了解原码反码补码
         */

    }
}