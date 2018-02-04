import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
            Scanner sc=new Scanner(System.in);
            
            String s1="saturday";
            String s2="sunday";
            String sa=sc.nextLine();
            String sb=sc.nextLine();
            if(sa.equals(s1) || sa.equals(s2))
            {
                System.out.print("yes");
            }
            else{
                System.out.print("no");
            }
            if(sb.equals(s1) || sb.equals(s2))
            {
                System.out.print("yes");
            }
            else{
                System.out.print("no");
            }
	}
}
