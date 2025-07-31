import React, { useState } from 'react';

// increment 
// decrement 
function Counter(){
    const [count, setCount] = useState(0);
    const [history, setHistory] = useState([]);

    const increment = ()=>{
        setCount(prev => prev + 1);
        setHistory(prev=>[...prev, count +1]);
        console.log(history)
    }

    const decrement = () =>{
        setCount(count -1);
        setHistory(prev => [...prev, count - 1]);

    }

    const reset = ()=>{
        setCount(0);
        console.log("reset");
        setHistory([]);
    }

    const remove = (index)=>{
        const updateHist = history.filter((hist, i)=> i!==index);
        setHistory(updateHist);
    }

    return (
        <>
        <h1> Counter </h1>
        <h2>Couter Count: {count}</h2>
        <button onClick={increment}>+ Increment</button>
        <button onClick={decrement}>- Decrement</button>
        <button onClick={reset}> Reset </button>

        <h3>History</h3>
        {history.length===0 ? (<h3>No History Yet</h3>):(
            <ul>
                {history.map((his, index) => (
                    <>
                    <li key={index}>{his}</li>
                    <button onClick={remove(index)}>Remove History</button>
                    </>
                ))}
            </ul>
        )}
        </>
    );
}

export default Counter;