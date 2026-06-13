// Find the sum of all elements in an array.
// let arr=[10,20,30,40,50];
let arr = [37, 82, 14, 95, 61];
let avg=arr.length;
let sum=arr.reduce((val,acc)=>{
    return val+acc;
},0);
console.log(sum);
console.log(sum/avg);
let maxval =Math.max.apply(null,arr);
let minval=Math.min.apply(null,arr);
console.log(maxval);
console.log(minval);
let maxVal=arr[0];
for(let i=0;i<arr.length;i++){
    if(maxVal<=arr[i]){
        maxVal=arr[i]
    }
}
console.log(maxVal);
let minVal=arr[0];
for(let j=0;j<arr.length;j++){
    if(arr[j] <minVal){
        minVal=arr[j];
    }
}
console.log(minVal);
console.log("-----------------------------");
let sum1=0;
for(let k=0;k<arr.length;k++){
    sum1+=arr[k];
}
console.log(sum1);
console.log("mobile me kiya hai bidu");
console.log("mobile me kiya hai biduwdadaw");
console.log("®");
console.log("i don't know about you'")

console.log("i don't know about you2'")
console.log("i don't know about you3'")
;
console.log("Check your brain");
console.log("testme")
console.log("Mein asa kyu hu")
