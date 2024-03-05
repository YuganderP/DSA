let arr=[8,6,5,3,5,6,7,2,9,10,2];


for(let i=0;i<arr.length-1;i++){
    let min=i;
    for(let j=i;j<arr.length;j++){
      if(arr[min]>arr[j])
        {min=j;}
        [arr[min], arr[i]] = [arr[i], arr[min]];
    }
    
}

console.log(arr)