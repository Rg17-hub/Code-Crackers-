/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ankit
 */
public class pattern2 {
    public static void main(String[] args){
      int rows=5;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=rows+4;j++){
                if(j>=6-i&&j<=4+i){
                     System.out.print("*");
                }else{
                     System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
