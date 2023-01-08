function persistence(num) {

  function multiply(n){
    return n.reduce(function(a,b){return a*b;})
  }

  var count = 0;

  while(num.toString().length>1){
    num = num.toString().split("");
    num = multiply(num);
    count++;
  }
  return count;
}

function highAndLow(numbers){
  numbers = numbers.split(" ");
  return Math.max.apply(null, numbers) + " " + Math.min.apply(null, numbers);
}

function validPhoneNumber(phoneNumber){
  var str = phoneNumber;
  var results = /^\(\d{3}\)\s\d{3}\-\d{4}$/.test(str);
  return results;
}

function deleteNth(arr,n){
  var results = [];
  for(var i=0; i<arr.length; i++){
  if (count(results, arr[i])<n) {
    results.push(arr[i]);
  }
}
return results;
}
function count(array, what){
  var count =0;
  for (var i=0; i<array.length; i++){
    if (array[i]===what){
      count++;
    }
  }
  return count;
}

function gap(g, m, n) {
    var lastPrime = 0;
    var isPrime = function(x) { 
      for (var i=2; i*i<=x; i++) { if (x % i == 0) return false; } return true;
    }
    
    for(var i = m; i <= n; i++)
        if(isPrime(i)) {
            if(i - lastPrime == g) return [lastPrime, i];
            else lastPrime = i;
        }
      
    return null;
}

function towerBuilder(nFloors) {
  var finalArray = [];
  var numSpaces = 0;
  for (var i=nFloors; i>0; i--){
    finalArray.push(" ".repeat(numSpaces) + "*".repeat(i) + "*".repeat(i-1) + " ".repeat(numSpaces));
    numSpaces++;
  }
  return finalArray.reverse();
}

function duplicateCount(text){
  var arr1 = text.toLowerCase().split('');
  var arr2 = [];
    for (var i=0; i<arr1.length; i++) {
        for (var j=0; j<arr1.length; j++){
      if (arr1[i]===arr1[j] && i !==j && arr2.indexOf(arr1[i]) == -1) {
        arr2 += arr1[i];
      }
    }
  }

return arr2.length;
}

function descendingOrder(n){
  var arr = n.toString().split('').sort(function(a,b){
    return b - a;
  });
var array = arr.map(function(x){
  return parseInt(x, 10);
});
var str = array.join('');
return Number(str);
}

function digital_root(num){
    var total = 0;
    if(num.toString().length == 1){
        var iNum = parseInt(num);
        return iNum;
    }else{
        num.toString().split("").forEach( function(value){
            var iValue = parseInt(value);
            return total += iValue;
        });
        return digital_root(total);
    }
}

function alphabetPosition(text) {
  var result = [];
  var alphabet = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
    "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
    "w", "x", "y", "z"]
  text = text.replace(/\W*\d+/g, '').toLowerCase().split('');
  for (var i = 0; i < text.length; i++) {
  var j = alphabet.indexOf(text[i]) + 1;
  if (j) result.push(j);
}
  return result.join(' ');
}

function filter_list(l) {
  // Return a new array with the strings filtered out
  var newArray =[];
  for (var i = 0; i < l.length; i++) {
    if (typeof l[i] == 'number') {
      newArray.push(l[i]);
}
}
        return newArray;
}

function multiply(a, b){
  var x = a * b;
  return x;
}