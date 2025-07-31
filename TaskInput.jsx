import React, {useState} from 'react';

function TaskInput({onAddTask}){
    const [input, setInput] = useState('');
    const handleSubmit =(e) =>{
        e.prevantDefault();
        onAddTask(input);
        setInput('');
    };
    return(
        <>
        <h3>Enter Details in The Form</h3>
        <form onSubmit={handleSubmit}>
        <input
        type= "text"
        value={input}
        placeholder='Enter a task...'
        onChange={(e)=> setInput(e.target.value)}
        style={styles.input}
        />
        <button type="submit" style={styles.button}></button>
        </form>
    </>
    );
}

const styles = {
    input :{
        padding: '0.5rem',
        fontSize: '1rem',
        width: '100%',
        marginRight: '0.5rem'
    },
    button :{
        padding : '0.5rem',
        backgroundColor: 'white',
        color: '#fff',
        borderRadius: '4px'
    }
}

export default TaskInput;