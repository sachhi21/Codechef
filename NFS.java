/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    StringTokenizer st = new StringTokenizer(br.readLine());
    int T = Integer.parseInt(st.nextToken());
    for (int tc = 0; tc < T; ++tc) {
      st = new StringTokenizer(br.readLine());
      int U = Integer.parseInt(st.nextToken());
      int V = Integer.parseInt(st.nextToken());
      int A = Integer.parseInt(st.nextToken());
      int S = Integer.parseInt(st.nextToken());

      System.out.println(solve(U, V, A, S) ? "Yes" : "No");
    }
  }

  static boolean solve(int U, int V, int A, int S) {
    return U * U - 2 * A * S <= V * V;
  }
}