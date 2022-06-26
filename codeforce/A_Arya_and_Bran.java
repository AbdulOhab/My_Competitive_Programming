package arya_and_bran;

import java.util.Scanner;
/**
 * @author Abdul Ohab
 */
public class Arya_and_Bran {
        public static void main(String[] args) {
           Scanner input=new Scanner(System.in);
           int n = input.nextInt();
           int k = input.nextInt();
           int ans = 0;
           for(int j=1; j<=n ;j++)
           {
                   ans = ans+ input.nextInt();
                   int p= Math.min(8, ans);
                   k=k-p;
                   ans=ans-p;
                   if(k<=0){
                   System.out.print(j);
                   return;
                   }
           }
           System.out.print("-1");
           
           } 
}
