/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ankit
 */
public class pattern20 {
       public static void main(String[] args){
           char k;
        for(int i=1;i<=4;i++){
            k=49;
            for(int j=1;j<=7;j++){
               if(j>=5-i&&j<=3+i){
                   if(j==5){
                       k='A';
                   }
                   System.out.print(k);
               k++;}
                   else
                   {System.out.print(" ");
               }}
               
           
             System.out.println();
        }
    }
}
