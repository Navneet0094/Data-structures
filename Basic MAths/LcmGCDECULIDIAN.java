
import java.util.Scanner;

class LcmGCDECULIDIAN{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a  = scan.nextInt();
        int b  = scan.nextInt();
        System.out.println("GCD: " + GCD(a, b));
        System.out.println("LCM: " + LCM(a, b));
    }
    public static int LCM(int a , int b){
        return (a*b)/GCD(a,b);
    }

    public static int GCD(int a , int b){
        while(a>0 && b>0){
            if(a>b){
                a = a%b;
            }
            else{
                b = b%a;
            }

        }
        if(a == 0){
            return b;
        }
        else{
            return a;
        }

    }
}