// LANGUAGE: Javascript
// AUTHOR: Smit
// GITHUB: https://github.com/smitsgithub

console.log('Hello, World!');

//console Logs, Errors, Warnings & More - A general JS contribution from my side.

console.time('The Code took');//Time count of code will initiate from here.
console.log('Hello Console');
console.log(34+4+2);
console.log(true);
console.log('[4,3,2,1]');
//below example is of object, which will be studied in detial later.
console.log({
    name:'Smit Patel',
    age:18,
});
//to present the above object in table form us console.table.
console.table({
    name:'Smit Patel',
    age:18,
});
//to show warning.
console.warn('This is warning!');
//to show error.
console.error('This is an error');
//time count of code will end here.Will indicate time taken to run the code up to here.
console.timeEnd('The Code took');


