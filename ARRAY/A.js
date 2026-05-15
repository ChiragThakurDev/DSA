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