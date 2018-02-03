
import java.io.*;
import java.util.*;

class Pri {
    public static void main (String[] args) {
    Scanner sc=new Scanner(System.in);
    String s="add";
    String s1="hdh";
    ArrayList<Character> a=new ArrayList<>();
    ArrayList<Character> a1=new ArrayList<>();
    for(int i=0;i<s.length();i++){
        if(!a.contains(s.charAt(i))){
            a.add(s.charAt(i));
        }
    }
    for(int i=0;i<s1.length();i++){
        if(!a1.contains(s1.charAt(i))){
            a1.add(s1.charAt(i));
        }
    }
    if(a.size()==a1.size()){
        System.out.print("true");
    }
    else{
        System.out.print("false");
    }
}
}
