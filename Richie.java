/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc= new Scanner(System.in); 
	    int T=sc.nextInt();
	    for (int tc = 0; tc < T; ++tc){
	    int A= sc.nextInt();
	    int B= sc.nextInt();
	    int X= sc.nextInt();
	    int D=(B-A)/X;
	    System.out.println(+D);
	    }
	 
		sc.close();
	}
}
