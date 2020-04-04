package cpe;

import java.util.Scanner;

public class Uva11044 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int testcase; // number of testcase
		int n; // number of rows
		int m; // number of cols
		testcase = sc.nextInt();
		for(int i=0;i<testcase;i++) {
			n = sc.nextInt();
			m = sc.nextInt();
			System.out.println((n/3)*(m/3));
		}
	}

}
