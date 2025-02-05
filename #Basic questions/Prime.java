
import java.util.Scanner;
import javax.sound.midi.SysexMessage;

class Prime{
    static int isPrime(int N){
        int c =0;
       for(int i =1; i<=Math.sqrt(N) ;i++){
           if(N%i ==0){
               if(i==N/i){
                   c +=1;
               }
               else{
                   c+=2;
               } 
           }
       }
    //    if(c == 2){return 1;}
    //    else return 0;
    return c==2 ? 1 : 0;
    }
    public static void main(String[] args){
            Scanner scan = new Scanner(System.in);
            int a = scan.nextInt();
            
            System.out.println(isPrime(a));

    }
}