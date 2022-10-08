let n = require('fs').readFileSync('/dev/stdin').toString().trim();
for(let i =5 * n; i>=1; i--){
  for(let j =5 * n; j>=1 ; j--){
    if(i <= n || j <= n){
      process.stdout.write('@')
    }
  }
  console.log()
}