package test_4_29.oop;

public class BookTest {
    public static void main(String[] args) {
        Book b1 = new Book();
        Book b2 = new Book();
        Book b3 = new Book();

        b1.id = "001";
        b2.id = "002";
        b3.id = "003";

        b1.name = "三国";
        b2.name = "水浒";
        b3.name = "富婆通讯录";

        b1.price = 88.88;
        b2.price = 88.88;
        b3.price = 1000000.0;

        b1.show();
        b2.show();
        b3.show();
    }
}
