async function sleepy(millis) {

    await new Promise(resolve => setTimeout(resolve, millis))
}

async function my_function(resolve) {
    await sleepy(4000)
    console.log(resolve)
}

my_function("I slept well!")