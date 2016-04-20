function person(name, age){
  this.name = name;
  this.age = age;
}


var Yask = new person('yask',21);
person.prototype.speak =  function(){
  return 'test';
}

console.log(Yask.speak())
