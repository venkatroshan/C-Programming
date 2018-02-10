import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		//System.out.println("GfG!");
		Scanner sc=new Scanner(System.in);
		int n,i;
		String s=sc.nextLine();
	    String s1=sc.nextLine();
	    int flag=1;
	    for(i=0;i<s.length() && i<s1.length();i++)
	    {
	        if(s.charAt(i)!=s1.charAt(i))
	        {
	            flag=0;
	        }
	       
	    }
	    if(flag==0)
	    {
	        System.out.print("yes");
	    }
	    else{
	        System.out.print("no");
	    }
	    
		
		
		
		
		
	
	}
}
