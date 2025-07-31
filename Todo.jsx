import React from 'react';

function TodoList(){
    const [tasks, setTasks] = useState([]);
    const [newTask, setNewTasks] = useState([]);

    const addTask=()=>{
        if(newTask.trim() !== ""){
            tasks=[...tasks, newTask];
            setTasks(tasks);
        }
    };
    
    const deleteTask = (index)=>{
        const updatedTasks = task.filter(task, idx => idx!==index);
        setTasks(updatedTasks);
    };
    return (<>
    <h1> TO DO List </h1>
    <form>
        <input
        type= "text"
        placeholder="Enter the text"
        value={newTask}
        onChange= {(e)=>setNewTasks(e.target.value)}>
        </input>
        <button type="submit" onclick={()=>addTask()}></button>
    </form>
    <ul>
        {tasks.map((task, index)=>{
            <li key={index} >
                <span>{task}</span>
                <button type="submit" onclick= {()=>{deleteTask(index)}}> Delete <button/>
            </li>

        })}
    </ul>

    </>);
}