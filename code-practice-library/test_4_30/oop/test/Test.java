package test_4_30.oop.test;

import test_4_30.oop.domain_javabean.Movie;

public class Test {
    public static void main(String[] args) {

        Movie movie1 = new Movie(1,"东八区的先生们","2022",2.1,"中国大陆","剧情 喜剧","夏春","张翰 王晓晨");
        Movie movie2 = new Movie(2,"上海堡垒","2019",2.9,"中国大陆","爱情 战争 科幻","滕华涛","鹿晗 舒淇");
        Movie movie3 = new Movie(3,"偶像练习生","2023",0.9,"中国大陆","爱情 战争 科幻","雪豹","蔡徐坤 王子异 丁真 王源");

        Movie[]movies = {movie1,movie2,movie3};
/*
        for (int i = 0; i < movies.length; i++) {
            System.out.println(movies[i]);//打印出来是三个地址
        }
*/
        //该如何将一个类中的数据，传递给另一个类
        MovieService movieService = new MovieService(movies);
        movieService.start();
    }
}
