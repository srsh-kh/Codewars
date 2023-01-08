public class StringToNumber {
    public static int stringToNumber(String str) {
      //TODO: Convert str into a number
      int foo = Integer.parseInt(str);
      return foo;
    }
  }

public class Kata {

    public static int makeNegative(final int x) {

        if (x > 0) {

            return x * -1;
        } else {
            return x;
        } // Your code here.

    }

}

public class Kata {

    public static int makeNegative(final int x) {

        return (x < 0) ? x : -x; // Your code here.

    }

}

import org.apache.commons.lang3.text.WordUtils;

public class JadenCase {

    public String toJadenCase(String phrase) {
        if (phrase != "") {
            // TODO put your code below this comment
            return WordUtils.capitalize(phrase);
        } else {
            return null;
        }
    }
}

import java.lang.Character;

public class JadenCase {

	public String toJadenCase(String phrase) {
    if (phrase == null || phrase.equals("")) return null;

    char[] array = phrase.toCharArray();

    for (int x = 0; x < array.length; x++) {
      if (x == 0 || array[x-1] == ' ') {
        array[x] = Character.toUpperCase(array[x]);
      }
    }

    return new String(array);
  }

}

import java.util.ArrayList;

class Metro {
    public static int countPassengers(ArrayList<int[]> stops) {
      return stops.stream()
                  .mapToInt(x -> x[0] - x[1])
                  .sum();
    }
  }

import java.lang.StringBuilder;

public class Kata
  {
  public static String reverseWords(final String original){

  String[] array = original.split(" ");
  if(array.length == 0)
    return original;

  int i = 0;
  for(String string : array){
    array[i] = new StringBuilder(string).reverse().toString();
    i++;
  }

  return String.join(" ", array);
    }
  }

public class Kata {
  public static String findNeedle(Object[] haystack) {
    return String.format("found the needle at position %d", java.util.Arrays.asList(haystack).indexOf("needle"));
  }
}
