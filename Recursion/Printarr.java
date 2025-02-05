class Printarr{
    public static void printA(int i,int []arr){
            if(i == arr.length) return ;
            System.out.print(arr[i]+" ");
            printA(i+1,arr);

    }
    public static void main(String[] args) {
        int arr []  = {3,5,4,6,9};
        printA(0,arr);

    }
}