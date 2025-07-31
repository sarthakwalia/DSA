import React from 'react';

function TaskList({tasks}){
    return (
        <ul style={styles.list}>
            {
                tasks.map((task, index)=>(
                    <li style={styles.item}>
                        {task}
                    </li>
                ))
            };
        </ul>
    );

}

const styles = {
    list :{
        padding:'1rem',
        marginTop: '1rem'
    }, 
    item :{
        padding: '0.5rem',
        marginTop: '1rem'
    }

}

export default TaskList;