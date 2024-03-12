package PrinciplesOfOOP;

public class Mollusca extends Water {
    protected String diet;
    protected String movement;
    protected Mollusca(String type, String name, String attribute, String diet, String movement) {
        super(type, name, attribute, type);
        this.diet = diet;
        this.movement = movement;
    }
    public void printDetails(){
        System.out.println("Type: "+type+" Name: "+name+" Attribute: "+attribute+" Diet: "+diet+" Movement: "+movement);
    }
}

