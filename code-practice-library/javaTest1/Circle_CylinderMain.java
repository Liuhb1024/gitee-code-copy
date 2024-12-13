public class Circle_CylinderMain {
    public static void main(String[] args) {
        Circle c = new Circle(2.0);
        System.out.println("Circle area: " + c.findArea());

        Cylinder cy = new Cylinder(2.0, 5.0);
        System.out.println("Cylinder volume: " + cy.findVolume());
    }
}
