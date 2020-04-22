import kotlin.collections.ArrayList
import kotlin.random.Random
import kotlin.system.measureTimeMillis

fun main(args: Array<String>) {
    println("Число для поиска?")
    val toFind = readLine()!!.toInt()
    val test = ArrayList<Int>()
    println("Тестовый массив(10 элементов)")
    for(i in 1..10) {
        test.add(readLine()!!.toInt())
    }
    val results = arrayListOf(find(test.sortedDescending(), toFind), find(test.sorted(), toFind), find(test, toFind)).sorted()
    println("""
        === Тестовый прогон:
        Среднее: ${results[1]}
        Лучший: ${results[0]}
        Худший: ${results[2]}
    """.trimIndent())
    arrayOf(100, 1_000, 10_000, 100_000, 1_000_000).forEach { n ->
        val data = ArrayList<Int>()
        data.add(toFind)
        for (i in 1 until n) {
            data.add(Random.nextInt())
        }
        var resultsData: List<Int>? = null
        val time = measureTimeMillis {
            resultsData = arrayListOf(find(data.sortedDescending(), toFind), find(data.sorted(), toFind), find(data, toFind)).sorted()
        }
        println("""
            === Прогон для n = $n за ${time}ms:
            Среднее: ${resultsData!![1]}
            Лучший: ${resultsData!![0]}
            Худший: ${resultsData!![2]}
        """.trimIndent())
    }
    println(test)
}


fun find(array: List<Int>, toFind: Int) = array.indexOf(toFind) + 1
