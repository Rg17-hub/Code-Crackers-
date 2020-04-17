
import static javafx.scene.input.KeyCode.S;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ankit
 */
public class pattern24 {
    
       public static void main(String[] args){
        char k;
           for(int i=1;i<=4;i++){
               k='A';
               for(char j='A';j<='S';j++){
                   if(j<='S'){
                   System.out.print(k);
                  k= (char) (k+i);}
                
           }
               System.out.println();
           }
       
    }}

