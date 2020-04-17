
public class pattern7 {
    public static void main(String[] args){
        int rows=10;
        int k=0;
        for(int i=1;i<=rows;i++){
            if(i<=rows-3){
                k++;
            }else{
                k--;
            }
            for(int j=1;j<=rows-3;j++){
                
                if(j<=k){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
