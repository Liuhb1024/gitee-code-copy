import java.util.Scanner;
public class score_level {
    public static void main(String[] args) {
        /*程序功能：定义成绩等级为：
        <60,D
        60-69，C
        70-89,B
        90-100，A
        判断输入的成绩等级，并进行输出
         */
        float score;
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入学生成绩：");
        score=scanner.nextFloat() ;
        if(score>=0 && score<60){ //或score<60
            System.out.println("该学生的成绩水平为：D\n");
        }
        else if(score>=60 && score<70){  //或score<70
            System.out.println("该学生的成绩水平为：C\n");
        }
        else if(score>=70 && score<90){  //或score<90
            System.out.println("该学生的成绩水平为：B\n");
        }
        else if(score>=90 && score<=100) {  //或score<100
            System.out.println("该学生的成绩水平为：A\n");
        }
        else{
            System.out.println("您输入的分数不在分数等级判断范围内，请重新输入\n");
        }
    }
}
