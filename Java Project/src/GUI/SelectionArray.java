package GUI;

import java.util.Arrays;

public class SelectionArray {


   public static boolean[] select = {true,true,true,true,true,true,true,true,true,true,true,true,true};


   static void resetArray(){

       for(int i = 0 ;i<=12;i++){

           select[i]= true;
       }

   }
    static void checkArray() {
        for (int i = 0; i <= 12; i++) {
            System.out.println(" " + Arrays.toString(SelectionArray.select));
        }
    }
}
