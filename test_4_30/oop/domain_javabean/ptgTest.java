package test_4_30.oop.domain_javabean;
//ptg插件
public class ptgTest {
    private int age1;
    private String name1;

    public ptgTest() {
    }

    public ptgTest(int age1, String name1) {
        this.age1 = age1;
        this.name1 = name1;
    }

    /**
     * 获取
     * @return age1
     */
    public int getAge1() {
        return age1;
    }

    /**
     * 设置
     * @param age1
     */
    public void setAge1(int age1) {
        this.age1 = age1;
    }

    /**
     * 获取
     * @return name1
     */
    public String getName1() {
        return name1;
    }

    /**
     * 设置
     * @param name1
     */
    public void setName1(String name1) {
        this.name1 = name1;
    }

    public String toString() {
        return "ptgTest{age1 = " + age1 + ", name1 = " + name1 + "}";
    }
}
