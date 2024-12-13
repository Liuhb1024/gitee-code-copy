package test_4_29.oop;

public class Test {
    /*
    需求：
       定义一个手机类(Phone)
             属性：(品牌：brand，颜色color，价格price)
             行为：
                  打电话(call)
                             -输出给xxx打电话
                  发短信(sendMessage)
                             -输出群发短信
        编写一个手机测试类(PhoneTest)
              创建两个手机对象，并给属性赋值
                   1.小米，白色，4999
                   2.华为，黑色，6999
               赋值之后，校验自己有没有赋值成功，使用打印语句校验，调用两个对象各自的成员方法

     */
    public static void main(String[] args) {
        Phone phone1 = new Phone();
        Phone phone2 = new Phone();

        phone1.brand = "小米";
        phone1.color = "白色";
        phone1.price = 4999;

        System.out.println(phone1.brand);
        System.out.println(phone1.color);
        System.out.println(phone1.price);

        phone2.brand = "华为";
        phone2.color = "黑色";
        phone2.price = 6999;

        System.out.println(phone2.brand);
        System.out.println(phone2.color);
        System.out.println(phone2.price);

        phone1.call("蔡徐坤");
        phone1.sendMessage();

        phone2.call("王子异");
        phone2.sendMessage();
    }
}
