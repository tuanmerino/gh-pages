url = prompt("Url: ");
var xhr = new XMLHttpRequest();
xhr.open('GET',"//"+url, true);
xhr.send();
