let arr = [1,2,3,4,5,6,7,8,9];
//console.log(arr);
let a=8;
let middle = arr.length/2;
console.log(middle,Math.floor(middle))

if(arr[Math.floor(middle)] ==  a){
  console.log('found in first try at index',arr[Math.floor(middle)].index)
}
else if(arr[Math.floor(middle)] > a){
  console.log('less number')
  for(let i=arr[Math.floor(middle)];i>=0;i--){
    console.log(arr[i])
      if(arr[i] == a){
        console.log('found number',arr[i],i)
        break;
      }
      else{
        console.log('not found')
      }
  }
}
else{
console.log('grater number')
 for(let i=arr[Math.floor(middle)];i<=arr.length;i++){
   console.log(arr[i])
      if(arr[i] == a){
        console.log('found number',arr[i],i)
        break;
      }
      else{
        console.log('not found')
      }
  }
}