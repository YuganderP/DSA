let arr=[8,6,5,3,5,6,7,2,9,10,2];

for(let i=arr.length-1;i>=0;i--){
    for(let j=0;j<i;j++){
        if(arr[j]>arr[j+1]){
        [arr[j],arr[j+1]]=[arr[j+1],arr[j]]
        }
    }
}
console.log(arr)