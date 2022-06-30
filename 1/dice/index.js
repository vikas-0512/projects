var num1=Math.floor(Math.random()*6)+1;
var num2=Math.floor(Math.random()*6)+1;
var ex="images/dice"+num1+".png";
document.querySelector(".img1").src=ex;
document.querySelector(".img2").src="images/dice"+num2+".png";
document.querySelector("h1").innerHTML;
if(num1>num2)
{
    document.querySelector("h1").innerHTML="first won";
}
else if(num1<num2)
{
    document.querySelector("h1").innerHTML="second won";
}
else
{
    document.querySelector("h1").innerHTML="its a draw";
}