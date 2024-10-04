import java.util.Scanner;
class GCD{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int a = scan.nextInt();
        System.out.print("Enter second number: ");
        int b = scan.nextInt();
        int gcd = 1;
        int min = Math.min(a, b);
        for(int i =1 ; i<min ; i++){
            if(a%i ==0 && b%i==0){
                gcd = i;
            }
        }
        System.out.println(gcd);
        
        

    }
}