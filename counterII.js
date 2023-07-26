let init = 0
let main_init = init
let calls = ["increment","increment","decrement","reset","reset"]
let list = []

for (let i = 0 ; i < calls.length ; i++) {
    if(calls[i] == "increment") {
        init++
        list[i] = init

    } else if (calls[i] == "decrement") {
        init--
        list[i] = init
        
    } else {
        init = main_init
        list[i] = init
    }
}

console.log(list)