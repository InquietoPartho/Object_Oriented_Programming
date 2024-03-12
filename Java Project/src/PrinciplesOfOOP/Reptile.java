package PrinciplesOfOOP;

public class Reptile extends Terrestrial{
    public Reptile(String type, String name, String attributes, String habitat){
        super(type,name, attributes, habitat);
    }
    public void printDetails(){
        System.out.println("Type: "+type+" Name: "+name+" Attribute: "+attribute+" Habitat: "+habitat);
    }
}
