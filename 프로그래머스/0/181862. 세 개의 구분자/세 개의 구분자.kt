class Solution {
    fun solution(myStr: String): Array<String> {
        var answer = myStr.map { if (it == 'a' || it == 'b' || it == 'c') '0' else it }.joinToString("").split("0").filter { it.isNotEmpty() }.toTypedArray() 
        
        return if (answer.isEmpty()) {
            arrayOf("EMPTY")
        } else {
            answer
        }
    }
}