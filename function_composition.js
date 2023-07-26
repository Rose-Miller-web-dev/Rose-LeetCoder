composition([x => 10 + x, x => 10 * x, x=>2], 5)

function composition(function_list, x) {
    
    for (let i = function_list.length - 1 ; i >= 0 ; i--) {

        x = function_list[i](x)
    }

    console.log("x is ", x)
}