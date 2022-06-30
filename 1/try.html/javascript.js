console.log("hello")
var count= document.getElementById("numbers")
var colour=document.getElementsByClassName("bg")
col
console.log(colour)
var initialcount=count.innerHTML
setInterval(function(){ 
    if(initialcount!=0)
{
    if(initialcount%2==0)
    count.innerHTML=initialcount-1;
    initialcount--;}
    
},1000)

