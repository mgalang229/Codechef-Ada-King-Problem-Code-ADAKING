import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       int tt = in.nextInt();
       for (int qq = 1; qq <= tt; qq++) {
           int k = in.nextInt();
           for (int i = 0; i < 8; i++) {
               for (int j = 0; j < 8; j++) {
                   if (i == 0 && j == 0) {
                       System.out.print("O");
                   } else if (k - 1 > 0) {
                       System.out.print(".");
                       k--;
                   } else {
                       System.out.print("X");
                   }
               }
               System.out.println();
           }
           System.out.println();
       }
    }
}
