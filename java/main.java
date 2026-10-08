interface Animal {
    void Sound();
}
class Dog implements Animal {
    @Override
    public void Sound() {
        System.out.println("Dog barks");
    }
}
class Cat implements Animal {
    @Override
    public void Sound() {
        System.out.println("Cat meows");
    }
}
public class main {
    public static void main(String[] args) {
        Animal a = new Dog();
        a.Sound();
        a = new Cat();
        a.Sound();
    }
}