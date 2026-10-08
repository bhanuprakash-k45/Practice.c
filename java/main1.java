interface Vechile{
    default void start(){
    System.out.print("Vechile is starting");
}
}
class Car implements Vechile{

}
public class main1{
    public static void main(String[] args) {
        Car c=new Car();
        c.start();
    }
}
