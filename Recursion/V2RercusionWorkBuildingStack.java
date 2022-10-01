package File6_Recursion;

public class V2RercusionWorkBuildingStack {
    public static void main(String[] args) {

        printDecrease(5);
    }

    public static void printDecrease(int n){

        // Base Case
        if(n==0){
            return;
        }

        System.out.println(n);
        printDecrease(n-1); // recursive call
    }
}
