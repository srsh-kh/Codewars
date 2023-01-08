Kotlin:
fun greet () = "hello world!"

object FixStringCase {
    fun solve(s: String): String = if (s.count { it.isLowerCase() } >= s.length/2.0) s.toLowerCase() else s.toUpperCase()
}
2 years agoRefactor
object FixStringCase {
    fun solve(s: String): String {
        var count = 0
        for (letter in s) {
            if (letter.isLowerCase()) {
                count++
            }
        }
        if (count >= (s.length.toDouble() / 2)) {
            return s.toLowerCase()
        }
        else {
            return s.toUpperCase()
        }
    }
    
}

fun checkForFactor(base: Int, factor: Int): Boolean {
    return base % factor == 0
}

fun getCount(str : String) = str.count { it in "aeiou" }
2 years agoRefactor
fun getCount(str : String) : Int {
  var count = 0
    var string = "aeiou"
    for (x in str) {
        if (x in string) {
            count++
    } 
}
        return count
}

fun numberToString(num: Int): String {
    return num.toString()
}