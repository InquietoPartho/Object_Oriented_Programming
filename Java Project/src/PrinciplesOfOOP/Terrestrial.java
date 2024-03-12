package PrinciplesOfOOP;
public class Terrestrial extends Creature{
    protected String type;
    public Terrestrial(String type, String name, String attributes, String habitat){
        super(name, attributes, habitat);
        this.type = type;
    }
}
