first_name="jack";
const person={
	first_name:"Michael",
	last_name:"Jordan",
	fullName:function(){
		return this.first_name +" "+ this.last_name;
	}
};

console.log(person.fullName());