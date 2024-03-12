package GUI;

import PrinciplesOfOOP.*;

public class Guess extends SelectionArray {
    static int index;
    static int i;


    static void checkAnswer() {
        for (i = 0; i <= 12; i++) {
            if (select[i] == true) {
                index = i;
                break;

            }
        }

    }
    public static int getIndex(){
        return index;
    }




}