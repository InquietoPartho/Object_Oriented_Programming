package PrinciplesOfOOP;

public class Crustacean extends Water {
    protected double size;
    protected String diet;
    protected String movement;

    public Crustacean(String type, String name, String attribute, String habitat, double size, String diet, String movement) {
        super(type, name, attribute, habitat);
        this.size = size;
        this.diet = diet;
        this.movement = movement;
    }
    public void printDetails(){
        System.out.println("Type: "+type+" Name: "+name+"Attribute: "+attribute+" Habitat: "+habitat+" Size: "+size+" Diet: "+diet+" Movement: "+movement);
    }
}
