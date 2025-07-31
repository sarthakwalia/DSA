import React, {useState} from 'react';
import TaskList from './TaskList';
import TaskInput from './TaskInput';

function App(){
    const [tasks, setTasks] = useState([]);

    const addTask = (task) =>{
        if(task.trim() != ''){
            setTasks([...tasks, task]);
        }
    }
    return (
        <>
        <h1>Task Manager</h1>
        <TaskInput onAddTask = {addTask}/>
        <TaskList tasks = {tasks}/>
        </>
    );
}
tasks.filter((element,i) => i!==index)