var cards=document.querySelectorAll(".cell");
var check=false;
var lock=false;
var val=0;
let firstCard,secondCard;
function flipcard()
{
    if(lock === true)
      return;
    if(this === firstCard)
    {
      return;
    }
    else{
    this.classList.add("flip");
    if(check === false)
    {
        check = true;
        firstCard=this;
    }
    else{
        check = false;
        secondCard=this;
        // console.log(firstCard.dataset.name);
        // console.log(secondCard.dataset.name);
        if(firstCard.dataset.name === secondCard.dataset.name)
        {
            firstCard.removeEventListener("click",flipcard);
            secondCard.removeEventListener("click",flipcard);
            val+=2;
            document.querySelector(".score").innerHTML=val;
        }
        else
        {
            lock=true;
            setTimeout(()=>{
            firstCard.classList.remove("flip");
            secondCard.classList.remove("flip");
            firstCard=null;
            secondCard=null;
            check=false;
            lock=false;
            },1500);
        }
    }
}
}
(function shuffle()
{
    cards.forEach(x => {
        var pos=Math.floor(Math.random() * 12);
        x.style.order=pos;
    });
})();
cards.forEach(x => x.addEventListener("click",flipcard));