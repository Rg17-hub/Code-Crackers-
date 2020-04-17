/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ankit
 */
public class pattern5 {
    public static void main(String[] args){
        int k;
        int i,j;
        for( i=1;i<=5;i++){
            k=1;
            for( j=1;j<=9;j++){
                if(j>=6-i&&j<=4+i){
                     System.out.print(k);
                     if(j<=4){
                         k++;
                     }else{
                         k--;
                     }
                }else{
                     System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
