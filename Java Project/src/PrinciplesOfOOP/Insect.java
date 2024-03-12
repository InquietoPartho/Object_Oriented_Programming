package PrinciplesOfOOP;

public class Insect extends Terrestrial{
    public Insect(String type, String name, String attributes, String habitat){
        super(type, name, attributes, habitat);
    }
    public void printDetails(){
        System.out.println("Type: "+type+" Name: "+name+" Attribute: "+attribute+" Habitat: "+habitat);
    }
}
