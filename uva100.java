import java.util.*;

public class uva100 {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNextInt()){
            int num1 = scanner.nextInt();
            int num2 = scanner.nextInt();
            int min = Math.min(num1, num2);
            int max = Math.max(num1, num2);
            int times = 0;

            for (int i = min; i <= max;i++){
                int temp = 1;
                for (int j = i; j != 1;){
                    // even number
                    if (j %2 == 0)
                        j = j / 2;
                    // odd number
                    else if (j %2 != 0)
                        j = j * 3 + 1;
                    temp++;
                }
                if (temp>times)times = temp;
            }

            System.out.println(num1 + " " + num2 + " " + times);
        }
    }
}
