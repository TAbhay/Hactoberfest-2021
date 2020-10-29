import java.io.*;
class Vote
{
 public static void main(String args[])throws IOException
 {
 BufferedReader br = new BufferedReader(new InputStreamReader(System.in())
 int age = Integer.parseInt(br.readLine());
 if age <18{
 System.out.println("You cannot vote");
 }
 else
 System.out.println("You can vote");
 }
 }}
