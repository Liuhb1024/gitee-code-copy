public class test_4_2 {
    /*
        方法（函数）method
        一段具有独立功能的代码块，不调用就不执行
        作用：可以将挤在一起的臃肿代码按照功能进行分类管理
             可以提高代码的复用性
定义格式：
        public static void 方法名(){
                //方法体
        }
方法调用格式：
        方法名();
注意事项：
        1.方法与方法之间是平级关系，不允许嵌套定义
        2.函数不调用就不执行
        3.方法的定义顺序与执行顺序无关
         */
//    public static void main(String[] args) {
//        eat();
//        farmer();
//        cook();
//        me();
//        getMax();
//    }
//    public static void eat(){
//        System.out.println("好饿啊，好想吃饭");
//    }
//    public static void farmer(){
//        System.out.println("除草");
//        System.out.println("耕地");
//        System.out.println("播种");
//        System.out.println("浇水");
//    }
//    public static void cook(){
//        System.out.println("买菜");
//        System.out.println("洗菜");
//        System.out.println("做菜");
//    }
//    public static void me(){
//        System.out.println("点菜");
//        System.out.println("吃菜");
//    }
//    /*
//    需求：定义一个方法，求两个整数的最大值
//     */
//    public static void getMax(){
//        int num1 = 10;
//        int num2 = 20;
//        int max = num1 > num2 ? num1 : num2;
//        System.out.println(max);
//    }

    //带参数方法的定义和调用
//    public static void main(String[] args) {
//        System.out.println("开始");
//        getMax(10,20);//实际参数
//        getMax(30,40);
//        System.out.println("结束");
//    }
//
//    public static void getMax(int num1, int num2){
//        //num1 num2形参
//        int max = num1 > num2 ? num1 : num2;
//        System.out.println(max);
//    }
    /*
    形参和实参
    ·形参：形式参数，是指在定义方法时，所声明的参数
    ·实参：实际参数，调用方法时，所传入的参数
     */

    /*
    带返回值的定义和调用
    我们经常会根据一个方法产出的结果，来去组织另外一段代码逻辑
    为了拿到这个方法产生的结果，就需要定义带有返回值的方法
·定义格式：
       public static 数据类型 方法名(数据类型 变量名1， 数据类型 变量名2...){
       return 数据值;
}
     */
//    public static void main(String[] args) {
//
//        int result = getMax(30,40);
//        System.out.println(result);
//
//    }
////void : 当前方法，没有返回值
//    public static int getMax(int num1, int num2){
//
//        int max = num1 > num2 ? num1 : num2;
//        return max;
//    }
    /*
方法通用定义格式：
    public static 返回值类型 方法名(参数){
    方法体;
    return 数据;
    }
----------------------------------------------
    厨师炒菜（伪代码）

    public static 盘子 炒菜（米，油，菜）{
    盘子p = 米 + 油 + 盐;
    return p;
    }

    盘子p = 炒菜（毒大米，地沟油，烂白菜）;
---------------------------------------------
·定义方法时，有两个明确
               明确参数，主要是明确参数的类型和数量
               明确返回值类型：主要是明确方法操作完毕之后是否有结果数据，如果有，写对应数据类型，没有void
eg:
   需求：设计一个方法，计算三个小数的最小值
   public static double getMin(double a,double b,double c){
           double tempMin = a < b ? a : b;
           double min = tempMin < c ? tempMin : c;
           return min;
   }

   需求：设计一个方法：计算出两个整数的和
   public static int getSum(int a, int b){
        int c = a + b;
        return c;

·调用方法时
       void类型的方法，直接调用即可
       非void类型的方法，推荐用变量接收调用

方法常见问题：
          ·方法不调用就不执行
          ·方法与方法之间是平级关系，不能嵌套定义
          ·方法编写顺序和执行顺序无关
          ·方法的返回值类型为void，表示该方法无返回值，没有返回值的方法可以不用return
          如果要编写return，后面不能跟具体数据
          ·return语句下面，永远不能编写代码，因为执行不到

方法重载：（overload）
     在同一个类中，定义了多个同名方法，但每个方法具有不同的参数类型或参数个数，
     这些同名的方法，就构成了重载关系
--------------------------------------------------------------------------
····简单记：
      同一个类中，方法名相同，参数不同的方法
      参数不同： 个数不同、类型不同、顺序不同
--------------------------------------------------------------------------
attention：识别方法之间是否重载，只看方法名和参数，跟返回值无关

方法重载的优点：
         不用记忆过多繁琐的方法名字
     */
    //   需求：提供四个计算方法，功能：计算两个整数相加、两个小数相加、三个整数相加、三个小数相加
    public static int add1(int a, int b){
        return a + b;
    }
    public static double add2(double a, double b){
    return a + b;
    }
    public static int add3(int a, int b, int c){
        return a + b + c;
    }
    public static double add4(double a, double b, double c){
        return a + b + c;
    }
}
/*
总结Java4-5
·掌握拓展赋值运算符的使用
·运用关系运算符完成数据比较
·清楚逻辑运算符的特点
·清楚短路逻辑运算符的特点
·三元运算符
·方法定义和调用
·识别方法与方法之间是否正确的重载关系
·理解重载的好处
 */
