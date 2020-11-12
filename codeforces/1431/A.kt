fun readLn() = readLine()!! // string line
fun readInt() = readLn().toInt() // single int
fun readStrings() = readLn().split(" ") // list of strings
fun readInts() = readStrings().map { it.toLong() } // list of ints
fun main() {
    var t=readInt()
    while(t>0){
        var n=readInt()
        var arr=readInts()
        var ans=0.toLong()
        var m=999999999999999
        for(x in 0..n-1){
            var temp=0.toLong()
            m=arr[x]
            for(y in 0..(n-1)){
                if(arr[y]>=m){
                //println(y)
                temp+=m
                }
            }
            if(temp>ans){
            ans=temp
            }
            //println(temp)
            //println("---------")
        }
        println(ans)
        //println("---------")
        t--
    }
}