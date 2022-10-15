/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		  Scanner sc = new Scanner(System.in);

    int T = sc.nextInt();
    for (int tc = 0; tc < T; ++tc) {
      int N = sc.nextInt();
      int S = sc.nextInt();

      System.out.println(find(N, S));
    }

    sc.close();
  }

  static int find(int N, int S) {
    return S - 2 * Math.max(0, S - N);
  }
}
	
