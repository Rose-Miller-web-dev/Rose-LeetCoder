
function group_by(fn, list) {

    let grouped = {}
    
    for (let i = 0 ; i < list.length ; i++) {
        key = fn(list[i])

        if(key in grouped) {

            grouped[key].push(list[i]);  
        }

        else {

            grouped[key]=[list[i]];  
        }

    }

    console.log(grouped)

}

function fn(n) {

    return String(n > 5);
}

group_by(fn, 

    [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

)