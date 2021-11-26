function person(FirstName ,LastName,Office_Address){
    this.FirstName=FirstName,
    this.LastName=LastName,
    this.Office_Address=Office_Address
}

var p1 = new person("Bhuvan","Tadikamalla","Cinema Hall Center , Lakkavaram");
var p2 = new person("Santhosh","Puvvada","Near ST>ANN'S E.M School , Tadepalligudem");
var p3 = new person("Manohar","Pali","Satrampadu,Eluru");

console.log(p1);
console.log(p2);
console.log(p3);
