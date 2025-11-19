public class Compress {
     public static void main(String[] args) {
        String str = "aaabbbccccddd"; //a3b3c4
        StringBuilder newStr=new StringBuilder();
        int count =1;
        for(int i=1;i<str.length();i++){
        if(str.charAt(i)==str.charAt(i-1)){
           count++;
         }
        else{
              newStr.append(str.charAt(i-1)).append(count);
              count=1;
         }

        }
         // Always safe and accurate
        newStr.append(str.charAt(str.length() - 1)).append(count);
        System.out.println(newStr);
    }
}
