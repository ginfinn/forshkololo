import kotlin.math.floor
import kotlin.random.Random
import kotlin.system.measureTimeMillis

fun main(args: Array<String>) {
    println("Число для поиска?")
    val toFind = readLine()!!.toInt()
    val test = ArrayList<Int>()
    println("Тестовый массив(10 элементов)")
    for(i in 1..10) {
      //  test.add(readLine()!!.toInt())
    }
    val results = arrayListOf(find(test.sortedDescending(), toFind, reverse = true), find(test.sorted(), toFind, reverse = false)).sorted()
    println("""
        === Тестовый прогон:
        Среднее: НЕПРИМЕНИМО
        Лучший: ${results[0]}
        Худший: ${results[1]}
    """.trimIndent())
    arrayOf(100, 1_000, 10_000, 100_000, 1_000_000).forEach { n ->
        val data = ArrayList<Int>()
        data.add(toFind)
        for (i in 1 until n) {
            data.add(Random.nextInt())
        }
        var resultsData: List<Long>? = null
        val time = measureTimeMillis {
            resultsData = arrayListOf(find(data.sortedDescending(), toFind, reverse = true), find(data.sorted(), toFind, reverse = false)).sorted()
        }
        println("""
            === Прогон для n = $n за ${time}ms:
            Среднее: НЕПРИМЕНИМО
            Лучший: ${resultsData!![0]}
            Худший: ${resultsData!![1]}
        """.trimIndent())
    }
    println(test)
}

fun find(
        sortedArray: List<Int>, toFind: Int, reverse: Boolean, low: Int = 0, high: Int = sortedArray.size - 1): Long {
    var low = low
    var high = high
    var comp: Long = 0
    while (low <= high) {
        comp++
        val mid = (low + high) / 2
        if (if (reverse) (sortedArray[mid] > toFind) else (sortedArray[mid] < toFind)) {
            low = mid + 1
        } else if (if (reverse) (sortedArray[mid] < toFind) else (sortedArray[mid] > toFind)) {
            high = mid - 1
        } else if (sortedArray[mid] == toFind) {
            break
        }
    }
    return comp
}
