/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ankit
 */
public class pattern17 {
    public static void main(String[] args){
        char k;
     //   char p;
        for(int i=1;i<=4;i++){
             k=(char) (64+i);
            for(int j=1;j<=5;j++){
                
          
                if(j<=i){
                    System.out.print(k--);
                   
                }else{
                    System.out.print(" ");
                }
                
            }
           
            System.out.println();
        }
    }
}
