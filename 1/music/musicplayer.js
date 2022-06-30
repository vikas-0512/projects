for(var i=0;i<document.querySelectorAll("button").length;i++)
{
document.querySelectorAll(".drum")[i].addEventListener("click",function(){
  helper(this.innerHTML);
});
}
function helper(key)
{
   switch(key)
   {
       case "a":
           var a1=new Audio("sounds/tom-1.mp3");
           a1.play();
        break;
        case "s":
           var s1=new Audio("sounds/tom-2.mp3");
           s1.play();
        break;
        case "d":
            var d1=new Audio("sounds/tom-3.mp3");
            d1.play();
        break;
        case "f":
            var f1=new Audio("sounds/tom-4.mp3");
            f1.play();
        break;
        case "j":
            var j1=new Audio("sounds/snare.mp3");
            j1.play();
        break;
        case "k":
             var k1=new Audio("sounds/kick-bass.mp3");
             k1.play();
        break;
        case "l":
            var l1=new Audio("sounds/crash.mp3");
            l1.play();
        break;
        default:
            alert("wrong click");
   }
}
document.addEventListener("keyup",function(event){
    helper(event.key);
});