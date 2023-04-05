var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let raio = parseFloat(lines.shift())
let PI = 3.14159
let area = PI*(raio*raio)
console.log(`A=${area.toFixed(4)}`)
