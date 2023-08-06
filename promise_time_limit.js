waiter = async (n) => { 
    await new Promise(resolve => {
        
        setTimeout(resolve, n)
    
    });
    
}

let n = 3000

async function f() {
    await waiter(2000)
    console.log("ok")
}

console.log(Promise.race([f, n]))

f()
