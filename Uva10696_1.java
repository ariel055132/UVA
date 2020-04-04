package cpe;

import java.util.Scanner;

public class Uva10696_1 {

	public static void main(String[] args) {
		// calculate the result first
		int[] no;
		no = new int[1000005]; //define a array with space 1000000
		for(int i = 1;i <= 1000000;i++) {
			no[i] = f91(i);
		}
		
		Scanner sc = new Scanner(System.in);
		int num;
		while((num=sc.nextInt())!=0) {
			System.out.println("f91("+num+") = " + no[num]); 
		}
	}
	
	public static int f91(int no) {
		if(no >= 101) {
			return no-10;
		}else {
			return f91(f91(no+11));
		}
	}
}
