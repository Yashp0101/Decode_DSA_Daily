const express = require('express');
const mongoose = require('mongoose');
const cors = require('cors');
const Attendance = require('./models/attendanceModel');

const app = express();
app.use(cors());
app.use(express.json());

mongoose.connect('mongodb://localhost:27017/attendanceDB', {
    useNewUrlParser: true,
    useUnifiedTopology: true
}).then(() => console.log('MongoDB Connected'));

app.post('/attendance', async (req, res) => {
    const { name } = req.body;
    const attendance = new Attendance({ name });
    await attendance.save();
    res.json({ success: true });
});

app.get('/attendance', async (req, res) => {
    const attendanceList = await Attendance.find();
    res.json(attendanceList);
});

app.listen(3000, () => {
    console.log('Server running on http://localhost:3000');
});
