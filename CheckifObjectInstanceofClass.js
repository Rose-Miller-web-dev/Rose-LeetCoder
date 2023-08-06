let instance = "1"
let class_ = String

if (instance instanceof class_) {

    console.log('true')

} else {
    
    if (typeof(instance) == String(class_)) {

        console.log('true')
        
    } else {

        console.log('false')

    }

}