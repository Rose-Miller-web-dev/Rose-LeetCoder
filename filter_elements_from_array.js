fn = function greaterThan10(n) { return n > 10; }
function firstIndex(n, i) { return i === 0; }

function my_function(array, fn) {

    let result_array = []
    index = 0
    for (let i = 0 ; i < array.length ; i++) {
        if(fn(array[i])) {
            result_array[index] = array[i]
            index++
        }
    }

    console.log(result_array)

}

my_function([0,10,20,30], firstIndex)