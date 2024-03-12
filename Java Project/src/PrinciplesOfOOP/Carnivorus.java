package PrinciplesOfOOP;

public class Carnivorus extends Terrestrial{
    protected double size;
    protected String diet;
    protected String movement;

    public Carnivorus(String type, String name, String attributes, String habitat, double size, String diet, String movement){
        super(type, name, attributes, habitat);
        this.size = size;
        this.diet = diet;
        this.movement = movement;
    }
    public void printDetails(){
        System.out.println("Type: "+type+" Name: "+name+" Attribute: "+attribute+" Habitat: "+habitat+" Size: "+size+" Diet: "+diet+" Movement: "+movement);
    }
}
