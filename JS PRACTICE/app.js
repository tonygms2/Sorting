
function mark(currentMark,TotalMarks) {
    var percentage  = (currentMark/TotalMarks)*100;
    if(percentage>=90){
        console.log(`your grade is A and percentage is ${percentage}`)
    }
    else if(percentage>=85){
        console.log("B");
    }
    else if(percentage>=80){
        console.log("B-");
    }
    else if(percentage>=75){
        console.log("C");
    }
    else{
        console.error(`YOU FAILED THE EXAM YOU GOT ${percentage}`);
        alert(`YOU FAILED THE EXAM YOU GOT ${percentage}`)
    }
    
}
mark(41,100);