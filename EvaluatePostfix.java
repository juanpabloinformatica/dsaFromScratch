/*
 * debo terminar este codigo pero ahora mismo me toma demasiado tiempo.
 */
import java.util.*;

public class EvaluatePostfix {
  Stack <Integer> pila ; 
  public EvaluatePostfix(){
    pila = new Stack <>();
  }
  public int evaluate(String cadena){
    StringBuilder sb = new StringBuilder(cadena);
    for (int i = 0; i < sb.length(); i++) {
        Integer c = Integer.parseInt(String.valueOf(sb.charAt(i)));
      try {
        if(){

        }
        this.pila.push(c);

      } catch (Exception e) {
        System.out.println("error al castear el numero");
      }


    }

  }
  public static void main(String[] args) {
    EvaluatePostfix e = new EvaluatePostfix();
    System.out.println("solo valido los operandos + - *");
    e.evaluate("2 3 * 5 4 * + 9 -");
  }
}
