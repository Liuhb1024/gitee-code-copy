import java.util.Random;
import java.util.Scanner;

public class JavaBasicCase7 {
    /*
    随机生成验证码
    需求：
        从26个英文字母（包含大小写），以及数字0-9中
        随机生成一个5为字符串的验证码并打印在控制台

    思路：
           从数组中随机取出一个元素

                根据数组的长度，产生一个随机数，拿着这个随机数，当做索引去数组中获取元素

     */
    public static void main(String[] args) {
        //思路
        tack();
        //字符串拼接
        StringDemo();


//        char[] chs ={
//                'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
//                'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
//                '0','1','2','3','4','5','6','7','8','9',
//        };
        //优化
        char[] chs = getContents();

//注意：打印字符类型数组名，不会看到地址值，是元素的内容
        String checkCode = getString(chs);

        System.out.println("生成的验证码为：>"+checkCode);
//        后续会详细学习equals，字符串
//        System.out.println("请输入验证码：>");
//        Scanner sc = new Scanner(System.in);
//        String inputCheckCode = sc.next();
//
//        if(inputCheckCode == checkCode){
//
//        }

    }

    private static String getString(char[] chs) {
        System.out.println(chs);

        Random r = new Random();
        String checkCode = "";
        for (int i = 1; i <= 5; i++) {
            int randomIndex = r.nextInt(chs.length);
            checkCode += chs[randomIndex];
        }
        return checkCode;
    }

    private static char[] getContents() {
        char[] chs = new char[26+26+10];

        int index = 0;

        for (char c = 'a'; c <= 'z'; c++){
            chs[index] = c;
            index++;
        }
        for (char c = 'A'; c <= 'Z'; c++){
            chs[index] = c;
            index++;
        }
        for (char c = '0'; c <= '9'; c++){
            chs[index] = c;
            index++;
        }
        return chs;
    }

    private static void StringDemo() {
        String s = "";
        s += 'a';
        s += 'G';
        s += '0';

        System.out.println(s);
    }

    private static void tack() {
        String[] aArr = {"米饭","馒头","包子","麻花","面条"};

        Random r1 = new Random();

        int i1 = r1.nextInt(aArr.length);

        System.out.println(i1);
        System.out.println(aArr[i1]);
    }
}
