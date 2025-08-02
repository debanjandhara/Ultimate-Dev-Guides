if (str.indexOf(ch) != -1)

public class StringReversal {
    public static void main(String[] args) {
        String originalString = "Hello World";
        StringBuilder stringBuilder = new StringBuilder(originalString);
        stringBuilder.reverse(); // Reverses the characters in the StringBuilder
        String reversedString = stringBuilder.toString(); // Converts back to a String

        System.out.println("Original String: " + originalString);
        System.out.println("Reversed String: " + reversedString);
    }
}

How to find, String Inside a string

how or in java works   

if (condition1 || condition2) {
    // Code to execute if either condition1 OR condition2 is true
} else if (condition3 || condition4) {
    // Code to execute if either condition3 OR condition4 is true,
    // and the previous if condition was false
} else {
    // Code to execute if none of the above conditions are true
}