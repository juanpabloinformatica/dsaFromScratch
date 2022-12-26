import java.util.*;

public class ReversedLinkedList {
  
    public class Node{
      int numero;
      Node siguiente;
      public Node(int numero){
        this.numero = numero;
        this.siguiente = null;
      }
    }
  public class LinkedList{
    Node ptr;
    public LinkedList(){
      this.ptr =null;
    }
    public void addNode(int numero){
      Node nn = new Node(numero);
      if(this.ptr==null){
        this.ptr = nn;
      }else{
        Node tempPtr = this.ptr;
        while(tempPtr.siguiente!=null){
          tempPtr = tempPtr.siguiente;
        }
        tempPtr.siguiente = nn;
      }
    }
    public void showList(){
      Node tempPtr = this.ptr;
      while(tempPtr!=null){
        System.out.println(tempPtr.numero+", ");
        tempPtr = tempPtr.siguiente;
      }

    }

  }
  Stack <Node> pila;
  StringBuilder sb;
  LinkedList l;
  public static void main(String[] args){
    System.out.println("hola mundo.");
    ReversedLinkedList obj = new ReversedLinkedList();
    // System.out.println(obj.reverseMethod("hello"));    
    // obj.l.addNode(1);
    // obj.l.addNode(2);
    // obj.l.addNode(3);
    // obj.l.addNode(4);
    // obj.l.showList();
  } 
  public ReversedLinkedList(){
    pila = new Stack<>();
    l = new LinkedList();
    l.addNode(1);
    l.addNode(2);
    l.addNode(3);
    l.addNode(4);
    l.showList();
    reverseMethod();
    l.showList();
    reverseMethod();
    l.showList();


  }  
 //  public String reverseMethod(String cadena){
 //    this.sb = new StringBuilder(cadena);
 //    String nuevaCadena = "";
 //   for (int i = 0; i < cadena.length(); i++) {
 //     this.pila.push(String.valueOf(sb.charAt(i)));
 //   }
 //   for (int i = 0; i < cadena.length(); i++) {
 //     nuevaCadena+=this.pila.pop();
 //   } 
 //   return nuevaCadena;
 // 
 //  }
    public void reverseMethod(){
       Node tempPtr = l.ptr;
       while(tempPtr.siguiente!=null){
          this.pila.push(tempPtr);
          tempPtr = tempPtr.siguiente;
       }
       this.pila.push(tempPtr);
       // while(!pila.empty()){
       //    System.out.println("nodo pila "+pila.pop().numero);
       // }
       Node tempHead =this.pila.pop(); 
       Node nuevoHead = tempHead;
       // System.out.println("mk servira: "+head.numero);
       // Node realHead = head;
       while(!this.pila.empty()){
         tempHead.siguiente = this.pila.peek();
         tempHead = tempHead.siguiente;
         this.pila.pop();
       }
       tempHead.siguiente = null;
       l.ptr = nuevoHead;
       // Node siguiente;  
       // // Node siguiente = head.siguiente = this.pila.peek();
       // while(this.pila.empty()==false){
       //   siguiente = this.pila.pop();
       //   head.siguiente =  siguiente;
       //   head = head.siguiente;
       // }
       // l.ptr = realHead;
       
   }

}

