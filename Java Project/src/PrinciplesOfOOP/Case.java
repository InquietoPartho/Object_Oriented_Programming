package PrinciplesOfOOP;

import GUI.*;

public class Case {

    static Fish dolphin = new Fish("Fish", "Dolphin", "Aquatic", "Water");
    static Fish shark = new Fish("Fish", "Shark", "Aquatic", "Water");

    static Mollusca octopus = new Mollusca("Mollusca", "Octopus", "Camouflage", "Red", "slow");
    //Mollusca obj4 = new Mollusca("Mollusca", "Squid", "Aquatic", "Fish, crustaceans", "Swimming" );

    static Crustacean crab = new Crustacean("Crustacean", "Crab ", "Powerful claws", "Rocky coastlines", 20, "scuttle sideways", "Moderate");
    static Crustacean shrimp = new Crustacean("Crustacean", "Shrimp ", "Transparent exoskeleton", "Freshwater and marine environments", 5, "Omnivorous", "Moderate");

    static Insect butterfly = new Insect("Insect", "Butterfly", "Metamorphosis", "Meadows & grassland");
    static Insect ant = new Insect("Insect", "Ant", "Social insects", "Forests, grasslands, and deserts");

    static Reptile turtle = new Reptile("Reptile", "Turtle", "Hard shell", "Land & water");
    static Reptile lizard = new Reptile("Reptile", "Lizard", "Scales", "Warm, dry places");

    static Carnivorus lion = new Carnivorus("Carnivorous", "Lion", "Large mane & powerful roar", "Savannas, grasslands, woodlands, forests", 420, "Carnivorous", "Fast");
    static Carnivorus leopards = new Carnivorus("Carnivorous", "Leopards", "Rosette-patterned coat", "Tropical forests, rainforests, savannas, grasslands", 160, "Carnivorous", "Fast");

    static Herbivorous cow = new Herbivorous("Herbivorous", "cow", "Strong hooves", "Grasslands, meadows, and plains", 110, "walking,trotting,galloping", "Moderate");
    static Herbivorous deer = new Herbivorous("Herbivorous", "Deer", "Antlers", "Forests, woodlands, and grasslands", 150, "fast", "Fast");


    public static void Switch() {
        // System.out.println(""+turtle.getName());
        //cow.printDetails();

        for (int i = 0; i <= 12; i++) {
            if (SelectionArray.select[0] == true) {
                dolphin.printDetails();
                break;
            } else if (SelectionArray.select[1] == true) {
                shark.printDetails();
                break;
            } else if (SelectionArray.select[2] == true) {
                octopus.printDetails();
                break;
            } else if (SelectionArray.select[3] == true) {
                crab.printDetails();
                break;
            } else if (SelectionArray.select[4] == true) {
                shrimp.printDetails();
                break;
            } else if (SelectionArray.select[5] == true) {
                butterfly.printDetails();
                break;
            } else if (SelectionArray.select[6] == true) {
                ant.printDetails();
                break;
            } else if (SelectionArray.select[7] == true) {
                turtle.printDetails();
                break;
            } else if (SelectionArray.select[8] == true) {
                lizard.printDetails();
                break;
            } else if (SelectionArray.select[9] == true) {
                lion.printDetails();
                break;
            } else if (SelectionArray.select[10] == true) {
                leopards.printDetails();
                break;
            } else if (SelectionArray.select[11] == true) {
                deer.printDetails();
                break;
            } else if (SelectionArray.select[12] == true) {
                cow.printDetails();
                break;
            }
        }
    }

    public static void printResult() {
        for (int i = 0; i <= 12; i++) {

             if (SelectionArray.select[5] == true) {
                 Butterfly butterfly = new Butterfly();
                break;
            } else if (SelectionArray.select[6] == true) {
                 Ant ant = new Ant();
                 break;

            } else if (SelectionArray.select[10] == true) {
                 Leopard leopard = new Leopard();
                break;
            } else if (SelectionArray.select[11] == true) {
                Deer deer = new Deer();
                break;
            } else if (SelectionArray.select[12] == true) {
                Cow coow = new Cow();
                break;
            }
        }
    }
}
