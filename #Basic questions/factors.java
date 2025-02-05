
import java.util.Scanner;

class factors{
    static int countFactors(int N) {
        
        int c = 0;
        for(int i=1;i<=Math.sqrt(N); i++){
            if(N%i ==0 ){
                if(i == N/i){
                    c +=1;
                }
                else {
                    c+=2;
                }
            }
        }
        return c;        
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println( countFactors(n));
       

    }
}