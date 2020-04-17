/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ankit
 */
public class pattern10 {
    public static void main(String[] args){
        int k = 0;
        for(int i=1;i<=9;i++){
            if(i<6){
                k++;
            }else{
                k--;
            }
            int x=1;
            for(int j=1;j<=5;j++){
                if(j>=6-k){
                    System.out.print(x);
                    x++;
                }else{
                    System.out.print(" ");
                }
               
            }
             System.out.println();
        }
    }
}
