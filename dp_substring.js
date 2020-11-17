let num = "4567";

let dp = [num[0]];

for (let i = 1; i < num.length; i++) {
    let size = dp.length;
    let j = 0;
    while (j < size) {
        dp.push(dp[j] + num[i]);
        j++;
    }
    dp.push(num[i]);
}

console.log(dp);