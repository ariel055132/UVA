package cpe;

import java.util.Scanner;

public class Uva10696 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int no;
		while((no = sc.nextInt())!=0) {
			System.out.println("f91("+no+") = " +f91(no));
		}
	}
	public static int f91(int no) {
		if (no >= 101) {
			return no - 10;
		}else {
			return f91(f91(no+11));
		}
	}

}
