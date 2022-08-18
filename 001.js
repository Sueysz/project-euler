'use strict'

let i = 0
let A = 0

while (i < 1000) {
    // console.log(`${i % 3 == 0} || ${i % 5 == 0} => ${i % 3 == 0 || i % 5 == 0}`)
    if (i % 3 == 0 || i % 5 == 0) {
        // console.log(i)
        A = A + i
    }
    i = i + 1
}

console.log(A)
