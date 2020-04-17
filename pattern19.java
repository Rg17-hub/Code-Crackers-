/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ankit
 */
public class pattern19 {
        public static void main(String[] args){
            char k='@';
        for(int i=1;i<=5;i++){
            k=(char) (k+2*(i-1)+1);
            for(int j=1;j<=5;j++){
               if(j>=6-i){
                   System.out.print(k--);}
                   else
                   {System.out.print(" ");
               }}
               
           
             System.out.println();
        }
    }
}
