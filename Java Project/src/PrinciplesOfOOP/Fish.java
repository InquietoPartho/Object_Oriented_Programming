package PrinciplesOfOOP;

public class Fish extends Water{
   protected double size;
    protected String diet;
    protected String movement;
    public Fish(String type, String name, String attribute, String habitat){
        super(type, name, attribute, habitat);
        this.size = size;
        this.diet = diet;
        this.movement = movement;
    }
    public void printDetails(){
        System.out.println("Type: "+type+" Name: "+name+" Attribute: "+attribute+" Habitat: "+habitat);
    }
}
