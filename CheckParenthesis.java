import java.util.*;
public class CheckParenthesis {
  Stack <String> pila;
  Scanner scan;
  public CheckParenthesis(){
    pila = new Stack<>();
    scan = new Scanner(System.in);
  }

  public boolean checker(String cd){
    StringBuilder sb = new StringBuilder(cd);
    for(int i = 0 ; i < sb.length();i++){
      String actualCaracter = String.valueOf(sb.charAt(i));
      if(isOpening(actualCaracter)){
        this.pila.push(actualCaracter);
      }else if(isClosing(actualCaracter)){
        if(this.pila.empty()){
          return false;
        }else{
          if(isOpposite(this.pila.peek(),actualCaracter)){
            this.pila.pop();
          }else{
            return false;
          }
        }
      }
    }
    if(this.pila.empty()){
      return true;
    }else{
      return false;
    }
  }
  private boolean isOpening(String c){
    if(c.equals("(")||c.equals("[")||c.equals("{")){
      return true;
    }else{
      return false;
    }
  }
  private boolean isClosing(String c){
    if(c.equals(")")||c.equals("]")||c.equals("}")){
      return true;
    }else{
      return false;
    }
  }
  private boolean isOpposite(String oc,String cc){
    String tempC;
    if(oc.equals("(")){
      tempC = ")";
      if(tempC.equals(cc)){
        return true;
      }else{
        return false;
      } 
    }else if(oc.equals("[")){
      tempC = "]";
      if(tempC.equals(cc)){
        return true;
      }else{
        return false;
      } 
    }else if(oc.equals("{")){
      tempC = "}";
      if(tempC.equals(cc)){
        return true;
      }else{
        return false;
      } 
    } 
    return false;
  }
  public static void main(String[] args) {
    CheckParenthesis ch = new CheckParenthesis();
    String cadena;
    while(ch.scan.nextInt()==1){
      ch.scan.nextLine();
      System.out.println("Digite nueva cadena");
      cadena = ch.scan.nextLine(); 
     System.out.println("resultado de la cadena: "+cadena+"es : "+ch.checker(cadena));
      System.out.println("desea seguir marque 1 sino lo que desee.");
    }
  }
}
