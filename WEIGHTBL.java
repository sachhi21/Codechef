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
      int w1 = Integer.parseInt(st.nextToken());
      int w2 = Integer.parseInt(st.nextToken());
      int x1 = Integer.parseInt(st.nextToken());
      int x2 = Integer.parseInt(st.nextToken());
      int M = Integer.parseInt(st.nextToken());

      System.out.println(Balance(w1, w2, x1, x2, M) ? 1 : 0);
    }
  }

  static boolean Balance(int w1, int w2, int x1, int x2, int M) {
    return x1 * M <= w2 - w1 && x2 * M >= w2 - w1;
  }
}