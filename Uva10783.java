package cpe;

import java.util.Scanner;

// You should follow the format stated by UVA to get AC
public class Uva10783 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt(); // no of testcase
		for(int case_no = 1; case_no <= t; case_no++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			int odd_sum = 0;
			for(int i=a;i<=b;i++) {
				if(i%2 == 1) {
					odd_sum += i;
				}
			}
			System.out.println("Case " + case_no +": " + odd_sum);
		}
	}

}
