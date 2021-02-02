const express = require ('express');
const app = express();

app.listen(3000, () => console.log('Express started and listening.'));

app.get('/', (req, res) => {
    res.send('Hello World!');
})