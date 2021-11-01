var message = 7;
console.log("global message = " +  message);

var a = function() {
var message = 5;
console.log("a: message = " + message);

b();
function b(){
	var message = 6;
 console.log("b : message = " + message);
}
}
a();