let nums = [[1,2],[3,4]]
let operation = 'Add'
let sum = 0

if (operation == 'Add') {
    for (let i = 0 ; i < nums.length ; i++) {
        for (let j = 0 ; j < nums[i].length ; j++) {
            sum += nums[i][j]
        }
    }

    console.log(sum)

} else {

    let result = '['+String(nums)+']'
    console.log(result)

}



