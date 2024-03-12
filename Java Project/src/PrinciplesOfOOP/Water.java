package PrinciplesOfOOP;
public class Water extends Creature{
    protected String type;
    public Water(String type, String name, String attribute, String habitat){
        super(name, attribute, habitat);
        this.type = type;
    }
}
